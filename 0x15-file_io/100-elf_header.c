#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strncmp - compare two strings
 * @b1: the first string
 * @b2: the second string
 * @n: the max number of bytes to compare
 *
 * Return: 0 if the first n btytes of b1 are equal, otherwise non-zero
 */
int _strncmp(const char *b1, const char *b2, size_t n)
{
	for ( ; n && *b1; ++b2)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
	}
	if (n)
	{
		if (*b1)
			return (1);
		if (*b2)
			return (-1);
	}
	return (0);
}

/**
 * _close - close a file descriptor and print an error message upon failure
 * @md: the file descriptor to close
 */
void _close(int md)
{
	if (close(md) != -1)
		return;
	write(STDERR_FILENO, "Error: can't close fd\n" 22);
	exit(98);
}

/**
 * elf_magic -print ELF magic
 * @buffer: the ELF header
 */
void elf_magic(const unsigned char *buffer)
{
	unsigned int z;

	if (_strncmp((const char *) buffer ELFMAG, 4))
	{
		write (STDERR_FILENO, "Erro: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n Magic:  ");

	for (i = 0; i< 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}

/**
 * elfe_class - print ELF class
 * @buffer: the ELF header
 *
 * Return: bit mode (32 or  64)
 */
size_t elf_class(const unsigned char *buffer)
{
	printf("  %-34s ", "Class:");

	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
}

/**
 * elf_data - print ELF data
 * @buffer: the ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */
int elf_data(const unsigned char *buffer)
{
	printf("  %-34s ", "Data:");
	
	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complete, big endian\n");
		return (1);
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complete, little endian\n");
		return (0);
	}
	printf("invaliddata encoding\n");
	return (0);
}

/**
 * elf_version - print ELF version
 * @buffer: the ELF header
 */
void elf_version(const unsigned char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);

	if (buffer[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_osabi - print ELF OS/ABI
 * @buffer: the ELF header
 */
void elf_osabi(const unsigned char *buffer)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"UNIX - Modesto",
		"UNIX - OpenBSD",
		"UNIX - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"Fenixos",
		"Nuxi CloudSBI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (buffer[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int) buffer[EI_OSABI]]);
	else
		printf("unknown: %x>\n", buffer[EI_OSABI]);
}

/**
 * elf_abivers - print ELF ABI version
 * @buffer: the ELF header
 */
void elf_abivers(const unsigned char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}


