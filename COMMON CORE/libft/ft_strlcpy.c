/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:57:22 by pabrogi           #+#    #+#             */
/*   Updated: 2025/11/09 14:08:11 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	space;

	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	space = dstsize - 1;
	while (*src && space--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (i);
}
