/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:24:28 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/22 15:44:13 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Function that compares the first n bytes (each interpreted 
// as unsigned char) of the memory areas s1 and s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	x = 0;
	while (x <= n)
	{
		if (ptr_s1[x] != ptr_s2[x])
			return (ptr_s1[x] - ptr_s2[x]);
		x++;
	}
	return (0);
}

/* int	main (void)
{
	char s1[50] = "Hola mundo";
	char s2[50] = "Hola aundo";

	printf("%d\n",ft_memcmp(s1, s2, 0));
	printf("%d",memcmp(s1, s2, 0));
	return (0);
} */