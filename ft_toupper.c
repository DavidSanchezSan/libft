/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:29:42 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/30 10:25:54 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that returns the upper character

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	else
		return (c);
}

/*
int	main(void)
{
	int	c;

	c = 'b';
	printf("%c",ft_toupper(c));
	return(0);
}
*/