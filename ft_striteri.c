/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 19:21:29 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/31 20:19:09 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// To each character in the string ‘s’, apply the function ‘f’ giving as
// parameters the index of each character within ‘s’ and the address of the
// character itself, which may be modified if necessary.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	x = 0;
	while (s[x] != '\0')
	{
		f(x, &s[x]);
		x++;
	}
}
// // Una función de ejemplo que se pasa a ft_striteri
// void print_index_char(unsigned int index, char *c)
// {
//     printf("Índice: %u, Carácter: %c\n", index, *c);
// }

// int main()
// {
//     char str[] = "Hola Mundo";
//     ft_striteri(str, print_index_char);
//     return (0);
// }