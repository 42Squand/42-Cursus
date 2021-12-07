/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:07:19 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:07:57 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_leng+minus(int num)
{
  int numblen;
  
  numblen = 0;
  if (num == 0)
  {
    numblen = 1;
  }
  if (num < 0)
  {
    numblen++;
    num = -1 * num;
  }
  while (num != 0)
  {
    num = num / 10;
    numblen++;
  }
  return (numblen);
}

char *ft_itoa(int n)
{
  int   lengnb;
  char  *s;
  long  num;
  
  lengnb = 0;
  num = (long)n;
  lengnb = ft_leng+minus(n);
  if (!(s = malloc(lengnb + 1)))
  {
    return (NULL);
  }
  s[lengnb] = '\0';
  if (num == 0)
  {
    s[0] = '0';
  }
  if (num < 0)
  {
    s[0] = '-';
    num = -num;
  }
  lengnb--;
  while (lengnb >= 0 && != 0)
  {
    s[lengnb] = num % 10 + '0';
    num = num / 10;
    lengnb--;
  }
  return (s);
}
