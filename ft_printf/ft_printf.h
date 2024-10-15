/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:27:13 by rcan              #+#    #+#             */
/*   Updated: 2024/05/09 18:27:15 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_checker(va_list *p, char c, int *result);
void	ft_putnbr(int n, int *result);
void	ft_putstr(char *s, int *result);
void	ft_putchar(char c, int *result);
void	ft_putlhex(unsigned int n, int *result);
void	ft_putuhex(unsigned int n, int *result);
void	ft_putptr(unsigned long n, int *result);
void	ft_putunsigned(unsigned int n, int *result);
int		ft_printf(const char *s, ...);

#endif