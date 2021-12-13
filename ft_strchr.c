/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:18:50 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/14 15:18:53 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char  *ft_strchr(const char *str, int c)
{
  size_t i;
  
  i = 0;
  while (i < ft_strlen(str) + 1)
  {
    if (str[i] == (char)c)
    {
      return ((char *)str + i);
    }
    i++;
  }
  return (NULL);
}
// a corriger
