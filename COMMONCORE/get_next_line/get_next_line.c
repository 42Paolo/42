#include "get_next_line.h"

char *get_next_line(int fd)
{
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	int	n;
	char *buff = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	char *str;
	char *rest;
	// while(((n = read(fd, buff, BUFFER_SIZE))) > 0)
	// {
		n = read(fd, buff, BUFFER_SIZE);
		buff[n] = '\0';	
		str = take_str(buff);
		if((rest = take_rest(buff)) != NULL)
		{
			int len_rest = ft_strlen(rest);
			//ANDARE A SOVRASCRIVERE IL BUFFER CON IL RESTO E SCRIVERCI SOPRA ANCHE 
			//IL RESTO DEL FILE FINO A QUANDO STRLEN DEL RESTO E +STRLEN FILE SONO MINORI DI BUFFERSIZE
		}
			
	//}
	return (buff);
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
		break;
	}

	printf("\n---- LETTURA FILE 2 ----\n");
	while ((line = get_next_line(fd2)) != NULL)
	{
		printf("LINEA2: %s", line);
		free(line);
		break;
	}

	close(fd1);
	close(fd2);
	return (0);
}