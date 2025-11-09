/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:12:07 by pabrogi           #+#    #+#             */
/*   Updated: 2025/11/09 19:54:25 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	space;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (dstsize <= dst_len)
		return (dstsize + src_len);

	space = dstsize - dst_len - 1;
	i = 0;
	while (src[i] && i < space)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
