/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:08:12 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:09:24 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int  i;
  char          *str;
  
  i = 0;
  if (!s)
  {
    return (NULL);
  }
  if (!(str = malloc(ft_strlen(s) + 1)))
  {
    return (NULL);
  }
  while (s[i])
  {
    str[i] = f(i, s[i]);
    i++;
  }
  str[i] = '\0';
  return (str);
}
