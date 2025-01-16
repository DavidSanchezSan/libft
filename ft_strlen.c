/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:01:18 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/15 12:01:21 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

// Function that returns the length of a string
size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
int	main(void)
{
	char str[50] = "Hola mundo";

	printf("Str: %s\n",str);
	printf("Strlen: %zu\n", ft_strlen(str));
	return (0);
}
*/