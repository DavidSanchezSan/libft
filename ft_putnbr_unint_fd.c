/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unint_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:54:11 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/28 12:00:48 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Auxiliary function for unsigned putnumber to print one digit as character
static	void	ft_one_unsigned_digit(unsigned int *count, int fd, int n)
{
	char	c;

	c = n + '0';
	write(fd, &c, 1);
	(*count)++;
}

// Function that prints an unsigned integer as character digits
unsigned int	ft_putnbr_unint_fd(unsigned int n, int fd)
{
	char			c;
	unsigned int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_unint_fd(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
		count++;
	}
	if (n >= 0 && n <= 9)
		ft_one_unsigned_digit(&count, fd, n);
	return (count);
}
