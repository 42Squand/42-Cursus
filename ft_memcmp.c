/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:20:01 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/14 15:20:03 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned char *str1;
  unsigned char *str2;
  unsigned long i;
  
  str1 = (unsigned char *)s1;
  str2 = (unsigned char *)s2;
  i = 0;
  while (i < n)
  {
    if (str1[i] != str2[i])
    {
      return (str1[i] - str2[i]);
    }
    else
    {
      i++;
    }
  }
  return (0);
}
