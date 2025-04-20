/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:21:26 by nfoughal          #+#    #+#             */
/*   Updated: 2022/11/14 16:03:21 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	for_print(char s, va_list list)
{
	if ((s == 'd' || s == 'i'))
		ft_putnbr(va_arg(list, int));
	else if (s == 'c')
		ft_putchar(va_arg(list, int));
	else if (s == 's')
		ft_putstr(va_arg(list, char *));
	else if (s == 'u')
		ft_unsigned(va_arg(list, unsigned int));
	else if (s == 'x')
		ft_nbr_base(va_arg(list, unsigned int), "0123456789abcdef");
	else if (s == 'X')
		ft_nbr_base(va_arg(list, unsigned int), "0123456789ABCDEF");
	else if (s == 'p')
	{
		ft_putstr("0x");
		ft_p(va_arg(list, size_t), "0123456789abcdef");
	}
	else if (s == '%')
		ft_putchar('%');
	else
		ft_putchar(s);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;

	i = 0;
	g_return = 0;
	va_start(list, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '\0')
				return (g_return);
			for_print(s[i], list);
		}
		else
			ft_putchar(s[i]);
		if (s[i] == '\0')
			break ;
		i++;
	}
	va_end(list);
	return (g_return);
}
