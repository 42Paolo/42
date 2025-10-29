/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:52:11 by pabrogi           #+#    #+#             */
/*   Updated: 2025/10/29 10:34:25 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	if(!s || !f)
		return ;
	i = 0;
	while(*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
