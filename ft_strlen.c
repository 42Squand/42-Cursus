/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:01:05 by mmujic            #+#    #+#             */
/*   Updated: 2021/12/14 16:12:50 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strlen(const char *str)
{
	int	charnum;

	charnum = 0;
	while (str[charnum] != '\0')
	{
		charnum++;
	}
	return (charnum);
}
