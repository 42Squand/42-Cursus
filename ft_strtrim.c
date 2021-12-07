/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:05:21 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:06:06 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim (const char *s1, const char *set)
{
  size_t  i;
  size_t  len;
  char    *str;
  
  if (!s1 || !set)
  {
    return (NULL);
  }
  i = 0;
  while (s1[i] != '\0' && ft_strchr(set, s1[i]))
  {
    i++;
  }
  len = ft_strlen(s1 + i);
  while (ft_strchr(set, s1[i + len]))
  {
    len--;
  }
  if (!(str = ft_substr(s1, i, len + 1)))
  {
    return (NULL);
  }
  return (str);
}
