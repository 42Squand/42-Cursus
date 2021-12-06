/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:17:50 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/14 15:17:55 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
  size_t l;
  
  l = 0;
  if (size > 0)
  {
    while (src[l] && l < (size - 1))
    {
      dest[l] = src[l];
      l++;
    }
    dest[l] = 0;
  }
  while (src[l])
  {
    l++;
  }
  return (l);
}
