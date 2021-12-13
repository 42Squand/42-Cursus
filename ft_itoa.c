/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:07:19 by mmujic            #+#    #+#             */
/*   Updated: 2021/10/22 13:07:57 by mmujic           ###   ########.fr       */
/*                                                                            */
/* **********************************************************************

static char	*ft_reverse_tab(char *tab, int size)
{
	int	i;
	int	save;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
	return (tab);
}

static int	ft_numit(int n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (i);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		s;
	char	*str;

	i = 0;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc((ft_numiterate(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[i++] = '0';
	if (n < 0 && sign++ == 0)
		n *= -1;
	while (n > 0)
	{
		str[i++] = '0' + (n % 10);
		n /= 10;
	}
	if (sign)
		str[i++] = '-';
	ft_revchar_tab(str, i);
	str[i] = '\0';
	return (str);
