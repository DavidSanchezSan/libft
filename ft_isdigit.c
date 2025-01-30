/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:56 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/30 10:25:24 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that checks if a character is a digit

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
int	main(void)
{
	printf("%d", ft_digit('1'));
	return (0);
}
*/