/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:05:24 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/20 18:21:38 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>
#include <string.h>

// Function that copies up to size - 1 characters from the
// NUL-terminated string src to dst, NUL-terminating the result.

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (x < size - 1)
		{
			dest[x] = src[x];
			x++;
		}
		dest[size] = '\0';
		return (ft_strlen(src));
	}
}

int	main(void)
{
	char	src[50] = "Hola mundo";
	char	dest[50];

	printf("%zu\n", ft_strlcpy(dest, src, 1));
	printf("%s", dest);
	return (0);
}
/*
int	main(void)
{
	char	src[50] = "Hola mundo";
	char	dest[50];

	printf("%zu\n", strlcpy(dest,src,10));
	printf("%s",dest);
	return (0);
}
*/
