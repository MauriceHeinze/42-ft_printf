/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr_long_hex.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:56:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/04/26 15:15:50 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_ptr_long_hex(unsigned long int n, int lowercase, int *counter)
{
	if (n > 9 && n < 16)
		ft_putchar_ptr_long_hex(n, lowercase, counter);
	else if (n >= 0 && n < 10)
		ft_putchar_ptr(n + '0', counter);
	else
	{
		ft_putnbr_ptr_long_hex(n / 16, lowercase, counter);
		ft_putnbr_ptr_long_hex(n % 16, lowercase, counter);
	}
}
