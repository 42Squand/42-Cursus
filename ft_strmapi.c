/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:08:12 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:09:24 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s;

	i = -1;
	if (!str)
		return (NULL);
	s = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (++i < ft_strlen(str))
		s[i] = f(i, str[i]);
	s[i] = '\0';
	return (s);
