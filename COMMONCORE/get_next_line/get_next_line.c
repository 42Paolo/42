#include "get_next_line.h"
#include <string.h>

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*buff;
	char		*str;
	int			n;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	if (rest)
	{
		ft_strlcpy(buff, rest, BUFFER_SIZE + 1);
		free(rest);
		rest = NULL;
	}
	else
		buff[0] = '\0';
	while (!ft_strchr(buff, '\n') && (n = read(fd, buff + ft_strlen(buff),
			BUFFER_SIZE - ft_strlen(buff))) > 0)
		buff[ft_strlen(buff) + n] = '\0';
	if (buff[0] == '\0')
		return (free(buff), NULL);
	str = take_str(buff);       
	rest = take_rest(buff);     
	free(buff);
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