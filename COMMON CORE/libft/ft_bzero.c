/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:39:19 by pabrogi           #+#    #+#             */
/*   Updated: 2025/11/09 12:42:08 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;
	size_t i;

	ptr = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
