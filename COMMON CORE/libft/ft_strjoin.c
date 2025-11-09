/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:08:34 by pabrogi           #+#    #+#             */
/*   Updated: 2025/11/09 19:54:19 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t				len;
	char				*str;
	char				*ret;
	const unsigned char	*ptr;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	ret = str;
	ptr = (const unsigned char *)s1;
	while (*ptr)
		*str++ = *ptr++;
	ptr = (const unsigned char *)s2;
	while (*ptr)
		*str++ = *ptr++;
	*str = '\0';
	return (ret);
}
