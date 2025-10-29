/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:34:19 by pabrogi           #+#    #+#             */
/*   Updated: 2025/10/28 13:54:59 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*temp_p;
	const char	*temp_f;

	if (*to_find == '\0')
		return ((char *)str);
	temp_f = to_find;
	while (*str)
	{
		if (*str == *to_find)
		{
			temp_p = str;
			while (*str && *to_find && *str == *to_find)
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return ((char *)temp_p);
			to_find = temp_f;
			str = temp_p + 1;
		}
		else
			str++;
	}
	return (NULL);
}
