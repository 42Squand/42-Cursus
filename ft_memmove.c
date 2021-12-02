/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:17:34 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/14 15:17:38 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memmove(void *dst, const void *src, size_t n)
{
  char        *dest;
  const char  *sourc;
  size_t      i;
  
  i = -1;
  dest = (char *)dst;
  sourc = (const char *)src;
  if (sourc < dest)
  {
    i = n;
    while (i > 0)
    {
      dest[i - 1] = sourc[i - 1];
      i--;
    }
  }
  else
  {
    while (i++ < n)
    {
      dest[i] = sourc[i];
    }
    return (dest);
  }
