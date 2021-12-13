/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:19:47 by mmujic            #+#    #+#             */
/*   Updated: 2021/12/13 13:10:47 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned long	l;
	unsigned char	sim;

	l = 0;
	sim = (unsigned char) c;
	str = (unsigned char *) s;
	while (l < n)
	{
		if (str[l] == sim)
		{
			return (&str[l]);
		}
		l++;
	}
	return (NULL);
}
