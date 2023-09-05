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
	int i;

	printf("Magic:	");

	for (i = 0; i < EI_NIDENT; i++)
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
	const char *class_str;

	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			class_str = "none";
			break;
		case ELFCLASS32:
			class_str = "ELF32";
			break;
		case ELFCLASS64:
			class_str = "ELF64";
			break;
		default:
			class_str = "<unknown>";
			break;
	}
	printf("Class:	%s\n", class_str);
}

/**
 * print_data- prints the data info
 * @header:the pointer to the file
 */
void print_data(const Elf64_Ehdr *header)
{
	const char *data_str;

	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			data_str = "none";
			break;
		case ELFDATA2LSB:
			data_str = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			data_str = "2's complement, big endian";
			break;
		default:
			data_str = "<unkown>";
			break;
	}
	printf("Data:	%s\n", data_str);
}

/**
 * print_version - prints the  current version of the os
 * @header: pointer to the file
 */
void print_version(const Elf64_Ehdr *header)
{
	printf("Version:  %d (current)\n", header->e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints the abi of the operating system
 * @header: pointer to the file
 */
void print_osabi(const Elf64_Ehdr *header)
{
	const char *osabi_str;

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			osabi_str = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			osabi_str = "HP-UX";
			break;
		case ELFOSABI_NETBSD:
			osabi_str = "NetBSD";
			break;
		case ELFOSABI_LINUX:
			osabi_str = "Linux";
			break;
		case ELFOSABI_SOLARIS:
			osabi_str = "Solaris";
			break;
		case ELFOSABI_IRIX:
			osabi_str = "IRIX";
			break;
		case ELFOSABI_FREEBSD:
			osabi_str = "FreeBSD";
			break;
		case ELFOSABI_TRU64:
			osabi_str = "TRU64 UNIX";
			break;
		case ELFOSABI_ARM:
			osabi_str = "ARM architecture";
			break;
		case ELFOSABI_STANDALONE:
			osabi_str = "Standalone (embedded)";
			break;
		default:
			osabi_str = "<unknown>";
			break;
	}
	printf("OS/ABI:	%s\n", osabi_str);
}

/**
 * print_abiversion - prints the abi version
 * @header: pointer to the file
 */
void print_abiversion(const Elf64_Ehdr *header)
{

	printf("ABI Version:	%d\n", header->e_ident[EI_ABIVERSION]);
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
