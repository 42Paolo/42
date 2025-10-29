/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:52:11 by pabrogi           #+#    #+#             */
/*   Updated: 2025/10/29 19:02:30 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*str;
	char		*tmp;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_is_in_set(*start, set))
		start++;
	end = s1 + ft_strlen(s1);
	while (end > start && ft_is_in_set(*(end - 1), set))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	tmp = str;
	while (start < end)
		*tmp++ = *start++;
	*tmp = '\0';
	return (str);
}
