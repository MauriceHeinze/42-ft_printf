/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:28:25 by mheinze           #+#    #+#             */
/*   Updated: 2022/05/12 14:41:47 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		no_chars_printed;
	va_list	args;

	i = 0;
	no_chars_printed = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			ft_specifier_handler(s[i + 1], args, &no_chars_printed);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			no_chars_printed++;
		}
		i++;
	}
	va_end(args);
	return (no_chars_printed);
}
