/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:42:19 by pabrogi           #+#    #+#             */
/*   Updated: 2025/11/09 12:45:47 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)b;	
	while(i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
