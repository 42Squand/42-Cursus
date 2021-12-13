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


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	int				len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	res = ft_calloc(len, sizeof(char));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
