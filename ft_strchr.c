/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:34:43 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/21 18:01:23 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function that returns a pointer to the matched character or NULL if the character is not found.
char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s != NULL)
	{
		if (s[x] == c)
			return (char *)s;
		else if (c == '\0')
			return (char *)s;
		x++;
		s++;
	}
	return (NULL);
}

int	main(void)
{
	const char	s[50] = "Hola mundo";
	printf("Antes de strchr: %s\n", s);
	ft_strchr(s, 'l');
	printf("Despues de strchr: %s", s);
	return (0);
}