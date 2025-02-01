/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 18:33:35 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/31 20:19:21 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// To each character in the string ‘s’, apply the function ‘f’ giving as
// parameters the index of each character within ‘s’ and the character itself.
// It generates a new string with the result of the successive use of ‘f’.

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	x;
	char *copy;

	x = 0;
	if (s == NULL)
		return (NULL);
	copy = ft_substr(s, 0, ft_strlen(s));
	if (copy == NULL)
		return (NULL);
	while (copy[x] != '\0')
	{
		copy[x] = f(x, copy[x]);
		x++;
	}
	return (copy);
}


char print_index_char(unsigned int index, char c)
{
    printf("Índice: %u, Carácter: %c\n", index, c);
    return (c);
}

int main()
{
    char str[] = "Hola Mundo";
    ft_strmapi(str, print_index_char); //toupper + striteri
    return (0);
}