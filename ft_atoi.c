/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:20:26 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/14 15:48:53 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int ft_atoi(const char *nptr)
{
  int i;
  int count;
  int sign;
  
  i = 0;
  count = 0;
  sign = 1;
  while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' ||
        nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\v')
  {
        i++;
  }
  if (nptr[i] == '-' && nptr[i + 1] >= 48 && nptr[i + 1] <= 57)
  {
    i++;
  }
  while (nptr[i] >= 48 && nptr[i] <= 57)
  {
    count = count * 10 + nptr[i++] - '0';
  }
  if ((count != (count * 10) / 10) && (sign > 0))
  {
    return (-1);
  }
  if ((count != (count * 10) / 10) && (sign < 0))
  {
    return (0);
  }
  return (sign * count);
