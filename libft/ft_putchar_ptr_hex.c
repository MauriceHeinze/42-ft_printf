/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_ptr_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:59:48 by mheinze           #+#    #+#             */
/*   Updated: 2022/04/25 20:52:54 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_ptr_hex(int n, int lowercase, int *counter)
{
	char	*lower;

	lower = "abcdef";
	if (lowercase)
		ft_putchar_ptr(lower[n - 10], counter);
	else
		ft_putchar_ptr(ft_toupper(lower[n - 10]), counter);
}
