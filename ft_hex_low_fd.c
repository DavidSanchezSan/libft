/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:56:38 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/28 11:58:07 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that prints a number as hexadecimal in lower characters
int	ft_hex_low_fd(unsigned long n, int fd)
{
	char	*c;
	int		count;

	c = "0123456789abcdef";
	count = 0;
	if (n > 15)
	{
		count += ft_hex_low_fd(n / 16, fd);
		write(fd, &c[n % 16], 1);
		count++;
	}
	else
	{
		write(fd, &c[n], 1);
		count += 1;
	}
	return (count);
}
