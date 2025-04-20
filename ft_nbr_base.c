/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:16:54 by nfoughal          #+#    #+#             */
/*   Updated: 2022/11/10 16:34:21 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nbr_base(unsigned int n, char *base)
{
	if (n < 16)
	{
		ft_putchar(base[n]);
	}
	else
	{
		ft_nbr_base(n / 16, base);
		ft_nbr_base(n % 16, base);
	}
}
