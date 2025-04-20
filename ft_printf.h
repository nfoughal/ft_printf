/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:31:30 by nfoughal          #+#    #+#             */
/*   Updated: 2022/11/14 16:09:17 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdlib.h>
# include<unistd.h>

int	g_return;

void	ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_printf(const char *s, ...);
void	ft_putstr(char *s);
void	ft_unsigned(unsigned int n);
void	ft_nbr_base(unsigned int n, char *base);
void	ft_p( size_t n, char *base);

#endif