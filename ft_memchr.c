/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:30:50 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/22 15:43:57 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Function that scans the initial n bytes of the memory 
// area pointed to by s for the first instance of c.
// Both c and the bytes of the memory area pointed to 
// by s are interpreted as unsigned char.

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (ptr_s[x] == c)
			return ((void *)&ptr_s[x]);
		x++;
	}
	return (NULL);
}

/* int	main  (void)
{
	char s[50] = "Hola mundo";
	int c = 'a';

	printf("%p\n",ft_memchr(s, c, 10));
	printf("%p",memchr(s, c, 10));
	return (0);
} */