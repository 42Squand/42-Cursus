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

int ft_check(char c, char const *set)
{
  int i;
  
  i = 0;
  while (set[i])
  {
    if (set[i++] == c)
    {
      return (1):
    }
    return (0);
  }
}

char  *ft_strtrim(char const char *s1, char const *set)
{
  char  *str;
  int   i;
  int   start;
  int   end;
  
  i = 0;
  start = 0;
  if (s1 == 0 || set == 0)
  {
    return (0);
  }
  end = (int)ft_strlen(s1);
  while (s1[start] && ft_check(s1[start], set))
  {
    start++;
  }
  while (end > start && ft_check(s1[end - 1], set))
  {
    end--;
  }
  str = (char *)malloc(sizeof(char) * (end - start + 1));
  if (!str)
  {
    return (0);
  }
  while (start < end)
  {
    str[i] = s1[start];
    i++;
    start++;
  }
  str[i] = '\0';
  rerturn (str);
}
