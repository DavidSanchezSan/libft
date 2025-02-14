/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:22:58 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/14 11:40:53 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that sends the number 'n' to the specified file descriptor and
// returns the number of characters writed.
static void	ft_one_digit(int *count, int fd, int n)
{
	char	c;

	c = n + '0';
	write(fd, &c, 1);
	(*count)++;
}

int	ft_putnbr_int_fd(int n, int fd)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		count = 11;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		count = 1;
	}
	if (n > 9)
	{
		count += ft_putnbr_int_fd(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
		count++;
	}
	if (n >= 0 && n <= 9)
		ft_one_digit(&count, fd, n);
	return (count);
}

// int	main(void)
// {
// 	int n = 100;
// 	printf("%d\n", ft_putnbr_int_fd(n, 1));
// 	return (0);
// }