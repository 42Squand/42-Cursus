/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:06:26 by mmujic            #+#    #+#             */
/*   Updated: 2021/12/13 15:59:51 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] == c || s[0] == '\0')
		count--;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			count++;
		}
		i++;
	}
	return (count + 1);
}

static int	ft_strlen_c(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static void	*ft_free(char **res, int i)
{
	while (i--)
	{
		free(res[i]);
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		charnum;

	if (!s)
		return (NULL);
	i = 0;
	charnum = ft_words_count(s, c);
	res = malloc(sizeof(char *) * (charnum + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < charnum)
	{
		while (*s == c && *s)
			s++;
		res[i] = ft_substr(s, 0, ft_strlen_c(s, c));
		if (res[i] == NULL)
			return (ft_free(res, i));
		s += ft_strlen_c(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
