/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:58:35 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/28 11:58:53 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that prints a memory position as hexadecimal characters
int	ft_ptr_fd(void *ptr, int fd)
{
	int	count;

	count = 0;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(fd, "0x", 2);
		count += 2;
		count += ft_hex_low_fd((unsigned long long)ptr, fd);
		return (count);
	}
}
