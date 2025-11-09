/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:39:50 by pabrogi           #+#    #+#             */
/*   Updated: 2025/11/09 19:41:53 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(long n)
{
	int	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;
	char	*ptr;

	nb = n;
	len = num_len(nb);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ptr = str + len;
	*ptr-- = '\0';
	if (nb < 0)
	{
		*str = '-';
		nb = -nb;
	}
	while (nb >= 10)
	{
		*ptr-- = (nb % 10) + '0';
		nb /= 10;
	}
	*ptr = nb + '0';
	return (str);
}
