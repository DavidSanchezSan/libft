/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:00:28 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/03 13:15:23 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that reserves, using malloc, an array of strings resulting from
// separating the string ‘s’ into substrings using the character ‘c’
// as delimiter. The array must end with a NULL pointer.

char	**ft_split(char const *s, char c)
{
	int	words;

	words = 0;
	while (words < 0)
	{
		
	}
}

int	main(void)
{
	const char	s[] = "Hola esto es una prueba";
	char *new_array;
	new_array = ft_split(s, ' ');
	printf("%s\n", new_array[0]);
	printf("%s\n", new_array[1]);
	printf("%s\n", new_array[2]);
	printf("%s\n", new_array[3]);
	printf("%s\n", new_array[4]);
	printf("%s\n", new_array[5]);
	free (new_array);
	return (0);
}