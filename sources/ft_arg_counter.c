/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_counter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:55:49 by mheinze           #+#    #+#             */
/*   Updated: 2022/04/24 14:01:46 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_arg_counter(const char *s)
{
	size_t	i;
	size_t	no_args;

	i = 0;
	no_args = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] != '%')
			no_args++;
		i++;
	}
	return (no_args);
}
