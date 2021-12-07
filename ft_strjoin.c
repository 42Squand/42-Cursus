/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:03:50 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:04:56 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  int   p1;
  int   p2;
  int   fusion;
  char  *str;
  
  p1 = ft_strlen(s1);
  p2 = ft_strlen(s2);
  fusion = p1 + p2;
  str = malloc((p1 + p2 + 1) * sizeof(char));
  if (!str)
  {
    return (NULL);
  }
  if (!s1 || !s2)
  {
    return (NULL);
  }
  if (s1 && s2)
  {
    ft_memcpy(str, s1, p1);
    ft_memcpy(str + p1, s2, p2);
  }
  str[fusion] = '\0';
  return ((char *)str);
}
