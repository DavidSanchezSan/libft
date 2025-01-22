/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:34:43 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/22 15:22:10 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Function that returns a pointer to the first matched character
// or NULL if the character is not found.

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/* int	main(void)
{
	const char	s[50] = "Hola mundo";
	printf("Antes de strchr: %s\n", s);
	printf("Despues de strchr: %s\n", ft_strchr(s, 'l'));
	printf("Antes de strchr: %s\n", s);
	printf("Despues de strchr: %s", strchr(s, 'l'));
	return (0);
} */