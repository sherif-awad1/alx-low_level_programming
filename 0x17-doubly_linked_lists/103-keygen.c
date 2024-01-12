/*
 * File: 103-keygen.c
 *
 * Author: Sherif Awad
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * bignum - get highest num
 * @UN: username
 * @len: length
 * Return: highest number
 */
int bignum(char *UN, int len)
{
int bn = *UN, idx = 0;
unsigned int random;

while (idx < len)
{
if (bn < UN[idx])
bn = UN[idx];
idx += 1;
}
srand(bn ^ 14);
random = rand();
return (random & 63);
}
/**
 * dup_un - mult username
 * @UN: username
 * @len: length
 * Return: mult
 */
int dup_un(char *UN, int len)
{
int bn, idx;

bn = idx = 0;
while (idx < len)
{
bn = bn + UN[idx] * UN[idx];
idx += 1;
}
return (((unsigned int)bn ^ 239) & 63);
}
/**
 * gen_rch - get random char
 * @UN: username
 * Return: random char
 */
int gen_rch(char *UN)
{
int bn, idx;

bn = idx = 0;
while (idx < *UN)
{
bn = rand();
idx += 1;
}
return (((unsigned int)bn ^ 229) & 63);
}
/**
 * main - to find password crackme5
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
char key[7];
int len, bn, idx;
long charctor[] = {
0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
0x723161513346655a, 0x6b756f494b646850};

(void)argc;
for (len = 0; argv[1][len]; len++)
;
key[0] = ((char *)charctor)[(len ^ 59) & 63];
bn = idx = 0;
while (idx < len)
{
bn = bn + argv[1][idx];
idx = idx + 1;
}
key[1] = ((char *)charctor)[(bn ^ 79) & 63];
bn = 1;
idx = 0;
while (idx < len)
{
bn = argv[1][idx] * bn;
idx = idx + 1;
}
key[2] = ((char *)charctor)[(bn ^ 85) & 63];
key[3] = ((char *)charctor)[bignum(argv[1], len)];
key[4] = ((char *)charctor)[dup_un(argv[1], len)];
key[5] = ((char *)charctor)[gen_rch(argv[1])];
key[6] = '\0';
for (bn = 0; key[bn]; bn++)
printf("%c", key[bn]);
return (0);
}
