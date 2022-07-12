/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr_ui.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:56:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/04/25 21:06:16 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_ptr_ui(unsigned int n, int *counter)
{
	if (n < 10 && n >= 0)
		ft_putchar_ptr_ui(n + '0', counter);
	else
	{
		ft_putnbr_ptr_ui(n / 10, counter);
		ft_putnbr_ptr_ui(n % 10, counter);
	}
}
