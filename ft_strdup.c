/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:05:24 by mmujic            #+#    #+#             */
/*   Updated: 2021/12/08 14:07:50 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dup)
	{
		return (NULL);
	}
	ft_memcpy(dup, str, ft_strlen(str) + 1);
	return (dup);
}
