/*
 * File: elf_header.c
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdarg.h>
void _checker(unsigned char *m);
void print_mgc(unsigned char *m);
void print_clas(unsigned char *c);
void print_data(unsigned char *d);
void print_ver(unsigned char *v);
void print_os_abi(unsigned char *osabi);
void print_abi(unsigned char *abi);
void print_type(unsigned int et, unsigned char *type);
void print_epa(unsigned long int add, unsigned char *epa);
void _closer(int fd);
/**
 * main - displays the information contained in the ELF header
 * @argc: argment count
 * @argv: pointer to array of argment
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *h;
	int opn, red;
	(void)argc;

	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		_closer(opn);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	red = read(opn, h, sizeof(Elf64_Ehdr));
	if (red == -1)
	{
		free(h);
		_closer(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	_checker(h->e_ident);
	printf("ELF Header:\n");
	print_mgc(h->e_ident);
	print_clas(h->e_ident);
	print_data(h->e_ident);
	print_ver(h->e_ident);
	print_os_abi(h->e_ident);
	print_abi(h->e_ident);
	print_type(h->e_type, h->e_ident);
	print_epa(h->e_entry, h->e_ident);

	free(h);
	_closer(opn);
	return (0);
}

/**
 * _checker - check if elf file
 * @m: pointer to magic number
 */
void _checker(unsigned char *m)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (m[i] != 'E' && m[i] != 'L' && m[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_mgc - print the mogic number
 * @m: pointer to ELF
 */
void print_mgc(unsigned char *m)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", m[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_clas - print  class of elf
 * @c: pointer to class
 */
void print_clas(unsigned char *c)
{
	printf("  Class:                             ");
	switch (c[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", c[EI_CLASS]);
	}
}
/**
 * print_data - print the data colom
 * @d: pointer to date
 */
void print_data(unsigned char *d)
{
	printf("  Data:                              ");

	switch (d[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", d[EI_CLASS]);
	}
}
/**
 * print_ver - print elf version
 * @v: pointer to elf version
 */
void print_ver(unsigned char *v)
{
	printf("  Version:                           %d", v[EI_VERSION]);

	switch (v[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_os_abi - print elf os/abi
 * @osabi: pointer to elf os/abi
 */
void print_os_abi(unsigned char *osabi)
{
	printf("  OS/ABI:                            ");
	switch (osabi[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", osabi[EI_OSABI]);
	}
}
/**
 * print_abi - print elf ebi
 * @abi: pointer to elf abi
 */
void print_abi(unsigned char *abi)
{
	printf("  ABI Version:                       %d\n", abi[EI_ABIVERSION]);
}
/**
 * print_type - print elf type
 * @et: elf type
 * @type: pointer to elf type
 */
void print_type(unsigned int et, unsigned char *type)
{
	if (type[EI_DATA] == ELFDATA2MSB)
		et >>= 8;
	printf("  Type:                              ");
	switch (et)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", et);
	}
}
/**
 * print_epa - print Entry point address
 * @add: adreess of elf
 * @epa: pointer to elf
 */
void print_epa(unsigned long int add, unsigned char *epa)
{
	printf("  Entry point address:               ");

	if (epa[EI_DATA] == ELFDATA2MSB)
	{
		add = ((add << 8) & 0xFF00FF00) | ((add >> 8) & 0xFF00FF);
		add = (add << 16) | (add >> 16);
	}
	if (epa[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)add);
	else
		printf("%#lx\n", add);
}
/**
 * _closer - close file
 * @fd: file descripton
 */
void _closer(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}
