/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:27:22 by rcan              #+#    #+#             */
/*   Updated: 2024/05/09 18:27:23 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuhex(unsigned int n, int *result)
{
	char	*a;

	a = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putuhex(n / 16, result);
		ft_putuhex(n % 16, result);
	}
	else
	{
		ft_putchar(a[n], result);
	}
}

void	ft_putptr(unsigned long n, int *result)
{
	char	*a;

	a = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putptr(n / 16, result);
		ft_putptr(n % 16, result);
	}
	else
	{
		ft_putchar(a[n], result);
	}
}
