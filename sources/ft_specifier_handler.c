/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:35:26 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/01 13:55:08 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_specifier_handler(char c, va_list ptr, int *counter)
{
	if (c == 's')
		ft_putstr_ptr(va_arg(ptr, char *), counter);
	if (c == 'd' || c == 'i')
		ft_putnbr_ptr(va_arg(ptr, int), counter);
	if (c == 'u')
		ft_putnbr_ptr_ui(va_arg(ptr, unsigned int), counter);
	if (c == 'x')
		ft_putnbr_ptr_hex(va_arg(ptr, unsigned int), 1, counter);
	if (c == 'X')
		ft_putnbr_ptr_hex(va_arg(ptr, unsigned int), 0, counter);
	if (c == 'c')
		ft_putchar_ptr(va_arg(ptr, int), counter);
	if (c == '%')
		ft_putchar_ptr('%', counter);
	if (c == 'p')
	{
		ft_putstr_ptr("0x", counter);
		ft_putnbr_ptr_long_hex(va_arg(ptr, unsigned long int), 1, counter);
	}
}
