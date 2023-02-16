#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * read_testfile - reads a text file, prints it to
 * standard output
 * @filename: a pointer to the file name
 * @letters: number of bytes to print
 * 
 * Return: number of letters read or printed
 * 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *c;

    int fd1 = open(filename, O_RDONLY);

    //printf("%d\n", fd1);

    int e = write(1, filename, read(fd1, c, 1024));

    return (e);
}