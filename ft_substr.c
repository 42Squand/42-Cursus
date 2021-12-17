/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:02:00 by mmujic            #+#    #+#             */
/*   Updated: 2021/12/17 13:12:24 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*s;

	i = -1;
	if (!str)
		return (NULL);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	s = malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (++i < len && start < ft_strlen(str))
		s[i] = str[start++];
	s[i] = '\0';
	return (s);
}
