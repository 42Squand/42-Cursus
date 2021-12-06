/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:17:21 by mmujic            #+#    #+#             */
/*   Updated: 2021/11/30 14:07:02 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest,	const void	*src, size_t	n)
{
	unsigned char		*origin;
	unsigned const char	*newcpy;
	size_t				i;

	origin = dest;
	newcpy = src;
	i = n;
	while ((i < n) && (dest != NULL || src != NULL))
	{
		origin[i] = newcpy[i];
		i++;
	}
	return (dest);
}
