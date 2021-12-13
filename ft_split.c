/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:06:26 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:06:59 by mmujic           ###   ########.fr       */
/*                                                                            */
/* *************************************************************************

static void	*ft_free_all(char **bigtab, int i)
{
	while (i--)
		free(bigtab[i]);
	free(bigtab);
	return (NULL);
}

static int	ft_words_count(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (str[i] == c || str[i] == '\0')
		words--;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			words++;
		i++;
	}
	return (words + 1);
}

static int	ft_word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		wlen;
	char	**bigtab;

	i = 0;
	if (!str)
		return (NULL);
	wlen = ft_words_count(str, c);
	bigtab = malloc((wlen + 1) * sizeof(char *));
	if (!bigtab)
		return (NULL);
	while (i < wlen)
	{
		while (*str == c && *str)
			str++;
		bigtab[i] = ft_substr(str, 0, ft_word_len(str, c));
		if (bigtab[i] == NULL)
			return (ft_free_all(bigtab, i));
		str += ft_word_len(str, c);
		i++;
	}
	bigtab[i] = NULL;
	return (bigtab);
