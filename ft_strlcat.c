/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:48:40 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/21 15:32:21 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Function that copies and concatenate strings respectively.

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	int		len_dst;

	len_dst = ft_strlen(dst);
	x = len_dst;
	if (size <= len_dst)
		return (size + ft_strlen(src));
	else
	{
		while (x < size - 1)
		{
			dst[x] = src[x - len_dst];
			x++;
		}
		dst[x] = '\0';
		return (ft_strlen(src) + len_dst);
	}
}
/*
int	main(void)
{
	char	dst[50] = "Hola";
	const char	src[50] = "mundo";

	printf("%zu\n", ft_strlcat(dst, src, 20));
	printf("%s\n", dst);
}
*/