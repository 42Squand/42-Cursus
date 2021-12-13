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


void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*sdst;
	const char	*ssrc;
	size_t		i;

	i = -1;
	sdst = (char *)dst;
	ssrc = (const char *)src;
	if (!sdst && !ssrc)
		return (NULL);
	while (++i < n)
		sdst[i] = ssrc[i];
	return (dst);
