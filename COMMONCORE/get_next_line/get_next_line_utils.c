#include "get_next_line.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int	ft_strlen(const char *s)
{
	int	i;
	
	i = 0;
	while(s[i])
		i++;
	return (i);	
}

char	*take_str(char *buff)
{
	int		i = 0;
	char	*str;
	char	*ptr;

	if (!buff)
		return (NULL);
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] == '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ptr = str;
	while (*buff && *buff != '\n')
		*str++ = *buff++;
	if (*buff == '\n')
		*str++ = *buff++;
	*str = '\0';

	return (ptr);
}

char	*take_rest(char *str)
{
	char	*ptr;
	char	*rest;
	char	*start;

	ptr = ft_strchr(str, '\n');
	if (!ptr)
		return (free(str), NULL);
	ptr++;
	if (*ptr == '\0')
		return (free(str), NULL);
	rest = (char *)malloc(ft_strlen(ptr) + 1);
	if (!rest)
		return (NULL);
	start = rest;
	while (*ptr)
		*rest++ = *ptr++;
	*rest = '\0';
	free(str);
	return (start);
}


