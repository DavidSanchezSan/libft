/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_int_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:41:22 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/14 11:46:04 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that sends the character ‘c’ to the specified file descriptor and
// returns the number of characters printed.

int	ft_putchar_int_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

// int	main(void)
// {
// 	char c = 'b';
// 	printf("%d",ft_putchar_int_fd(c,1));
// 	return (0);
// }