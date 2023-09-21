		extern prinf

		global main
	main:
		mov	rdi, fmt
		oxr	eax, eax
		call	printf
		mov	eax, 0
		ret

		fmt: db `Hello, Holberton\n`,0
