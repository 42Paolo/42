/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:52:11 by pabrogi           #+#    #+#             */
/*   Updated: 2025/10/29 10:16:14 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strnew(size_t size)
{
	char *str = (char *)malloc(sizeof(char) * (size + 1));
	if(!str)
		return NULL;
	ft_bzero(str, size + 1);
	return str;
}