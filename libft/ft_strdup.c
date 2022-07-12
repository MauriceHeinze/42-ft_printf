/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:05:03 by mheinze           #+#    #+#             */
/*   Updated: 2022/04/24 13:05:08 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		str_len;

	str_len = ft_strlen(s1) + 1;
	dst = malloc(sizeof(char) * str_len);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, str_len);
	return (dst);
}
