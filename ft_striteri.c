/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:09:48 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:10:32 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri (char *s, void (*f)(unsigned int, char*))
{
  unsigned int  i;
  
  i = -1;
  while (s && s[++i])
  {
    f(i, &str[i]);
  }
  return ;
}
