/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:23:30 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/17 17:23:33 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

// Function that copies n bytes of memory location to another memory location.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	x = 0;
	while (x < n)
	{
		ptr_dest[x] = ptr_src[x];
		x++;
	}
	return (ptr_dest);
}
/*
int main()
{
    char str1[] = "Hola ";
    char str2[] = "mundo";

    printf("Antes de memcpy: %s\n",str1);

    // Copies contents of str2 to str1
    memcpy(str1, str2, 4);

    printf("Despues de memcpy: %s\n",str1);

    return 0;
}
*/