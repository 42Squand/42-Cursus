/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:26:56 by mmujic            #+#    #+#             */
/*   Updated: 2021/11/30 11:07:21 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *str);
void	*memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

