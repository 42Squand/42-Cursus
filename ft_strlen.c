/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:01:05 by mmujic            #+#    #+#             */
/*   Updated: 2021/12/17 12:18:09 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlen(const char *str)
{
	int	charnum;

	charnum = 0;
	while (str[charnum] != '\0')
	{
		charnum++;
	}
	return (charnum);
}
