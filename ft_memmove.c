/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:02:43 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:12 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

// Function that copies a block of memory from a location to another.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	x = 0;
	if (!dest && !src)
		return (NULL);
	else if (dest <= src)
		ft_memcpy(ptr_dest, ptr_src, n);
	else if (dest > src)
	{
		x = n;
		while (x > 0)
		{
			x--;
			ptr_dest[x] = ptr_src[x];
		}
	}
	return (ptr_dest);
}
/*
int	main(void)
{
	char	src[50] = "Hola mundo";
	char	src2[50] = "Adios planeta";

	printf("Antes de ft_memmove: %s\n", src);
	ft_memmove(&src[3], src, 5);
	printf("Después de ft_memmove: %s\n", src);
	//printf("Antes de memmove: %s\n", src2);
	//memmove(&src2[3], src2, 10);
	//printf("Después de memmove: %s\n", src2);
	return (0);
}
*/