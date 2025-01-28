/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:39:08 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:06 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function that checks if a character is printable

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main(void)
{
	printf("%d", ft_isprint('1'));
	return (0);
}
*/