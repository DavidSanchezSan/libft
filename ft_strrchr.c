/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:21:40 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:27 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Function that returns a pointer to the last matched character
// or NULL if the character is not found.

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int	main(void)
{
	const char	s[50] = "Hello world";

	printf("Antes de strrchr: %s\n", s);
	printf("Despues de strrchr: %s\n", ft_strrchr(s, 'a'));
	printf("Antes de strrchr: %s\n", s);
	printf("Despues de strrchr: %s", strrchr(s, 'a'));
	return (0);
}
*/
