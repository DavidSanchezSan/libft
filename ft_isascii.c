/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:25:42 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/15 11:25:46 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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