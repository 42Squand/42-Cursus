/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:18:05 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/14 15:18:08 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_len;
    size_t src_len;

    dest_len = ft_strlen(src);
    src_len = ft_strlen(dest);
    i = dest_len;
    j = 0;
    if (dest_len < size - 1 && size > 0)
    {
        while (src[j] && dest_len + j < size -1)
        {
            dest[i] = src[j];
            i++;
            j++;
        }
        dest[i] = 0;
    }
    if (dest_len >= size)
    {
        dest_len = size;
    }
    return (dest_len + src_len);
