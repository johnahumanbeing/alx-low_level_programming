#include "main.h"

void print_magic(const Elf64_Ehdr *header);
void print_class(const Elf64_Ehdr *header);
void print_data(const Elf64_Ehdr *header);
void print_version(const Elf64_Ehdr *header);
void Print_osabi(const Elf64_Ehdr *header);
void print_abiversion(const Elf64_Ehdr *header);
void print_type(const Elf64_Ehdr *header);

/**
 * main- displays info contained in the ELF header at the start of an ELF File
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: can't read ELF header from file %s\n",
				argv[1]);
		exit(98);
	}

	print_magic(&header);
	print_class(&header);
	print_data(&header);
	print_version(&header);
	print_osabi(&header);
	print_abiversion(&header);
	print_type(&header);

	close(fd);

	return (0);
}

/**
 * print_magic - prints the magic info
 * @header:pointer to the file
 */
void print_magic(const Elf64_Ehdr *header)
{
	printf("Magic:	");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class- prinnts the class info
 * @header: pointer to the file
 */
void print_class(const Elf64_Ehdr *header)
{
	printf("Class:	");
	switch (header->e_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
			break;
	}
}

/**
 * print_data- prints the data info
 * @header:the pointer to the file
 */
void print_data(const Elf64_Ehdr *header)
{
	printf("Data:	");
	switch (header->e_ident[EI_DATA])
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
			printf("<unkown:>\n%", header->e_ident[EI_DATA]);
			break;
	}
}

/**
 * print_version - prints the  current version of the os
 * @header: pointer to the file
 */
void print_version(const Elf64_Ehdr *header)
{
	printf("Version:  %d\n", header->e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints the abi of the operating system
 * @header: pointer to the file
 */
void print_osabi(const Elf64_Ehdr *header)
{
	printf("OS/ABI:  ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) ABI\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion - prints the abi version
 * @header: pointer to the file
 */
void print_abiversion(const Elf64_Ehdr *header)
{

	printf("ABI Version:	%d\n ", header->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of file
 * @header: pointer to the file
 */
void print_type(const Elf64_Ehdr *header)
{
	printf("Type:	");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
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
			printf("<unknown: %x>\n", header->e_type);
			break;
	}

	printf("Entry point address:	%lx\n", header->e_entry);

	printf("ELF header size:	%d(bytes)\n", header->e_ehsize);

}
