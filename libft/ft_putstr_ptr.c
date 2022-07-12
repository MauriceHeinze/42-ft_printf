/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:13:52 by mheinze           #+#    #+#             */
/*   Updated: 2022/04/26 11:11:09 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_ptr(char *s, int *counter)
{
	int	i;

	if (!s)
	{
		ft_putstr_ptr("(null)", counter);
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_ptr(s[i], counter);
		i++;
	}
}
