/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:02:00 by mmujic            #+#    #+#             */
/*   Updated: 2021/12/13 15:53:54 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;
	size_t	i;

	i = 0;
	if (!*s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < len)
		len = slen;
	res = malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len && start < (unsigned int)ft_strlen(s))
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
