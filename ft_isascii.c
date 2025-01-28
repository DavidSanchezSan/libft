/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:25:42 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:02 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function that checks if a character is an ASCII character

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	printf("%d", ft_isascii('A'));
	return (0);
}
*/