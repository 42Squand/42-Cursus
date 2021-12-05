/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:02:00 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:03:35 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  a;
  size_t  b;
  char    *str;
  
  str = (char*)malloc(sizeof(*s) * (len + 1));
  if  (!str)
  {
    return (NULL);
  }
  a = 0;
  b = 0;
  while (s[a])
  {
    if (a >= start && j < len)
    {
      str[b] = s[a];
      b++;
    }
    a++;
  }
  str[b] = 0;
  return (str);
}
