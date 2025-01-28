/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:00:29 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:01 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function that checks if a character is alphabetical

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	printf("%d", ft_isalpha('A'));
	return (0);
}
*/