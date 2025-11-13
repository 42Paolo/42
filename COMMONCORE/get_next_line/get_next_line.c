#include "get_next_line.h"
#include <unistd.h>

char *get_next_line(int fd)
{
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	int	n;
	char *buff = (char *)malloc(sizeof(char) * BUFFER_SIZE);
		while((n = read(fd, buff, BUFFER_SIZE) > 0))
		{
			buff[n] = '\0';
			

		}
	return (str);
}

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line;

	// Apri due file di esempio
	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);

	if (fd1 < 0 || fd2 < 0)
	{
		perror("Errore apertura file");
		return (1);
	}

	printf("---- LETTURA FILE 1 ----\n");
	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("LINEA1: %s", line);
		free(line);
	}

	printf("\n---- LETTURA FILE 2 ----\n");
	while ((line = get_next_line(fd2)) != NULL)
	{
		printf("LINEA2: %s", line);
		free(line);
	}

	close(fd1);
	close(fd2);
	return (0);
}