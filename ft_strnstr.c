/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:20:17 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/14 15:20:18 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strnstr(const char *s1, const char *s2, size_t len)
{
  size_t  i;
  size_t  j;
  
  if (!s1 || !s2)
  {
    return (NULL);
  }
  if (!s1 || !s2[0])
  {
    return ((char*)s1);
  }
  i = 0;
  while (s1[i] && i < len)
  {
    j = 0;
    while (s1[i + j] && s2[j] && i + j < len
           && s1[i + j] == s2[j])
    {
      j++;
    }
    if (!s2[j])
    {
      return ((char*)(s1 + i));
    }
    i++;
  }
  return (NULL);
}
