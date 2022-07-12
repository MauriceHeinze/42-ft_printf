/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:56:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/04/26 15:14:43 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_ptr(int n, int *counter)
{
	if (n == -2147483648)
		ft_putstr_ptr("-2147483648", counter);
	else if (n < 0)
	{
		ft_putchar_ptr('-', counter);
		ft_putnbr_ptr(-n, counter);
	}
	else if (n < 10)
		ft_putchar_ptr(n + '0', counter);
	else
	{
		ft_putnbr_ptr(n / 10, counter);
		ft_putnbr_ptr(n % 10, counter);
	}
}
