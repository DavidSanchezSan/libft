/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_int_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:18:23 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/14 11:22:17 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function that sends the string ‘s’ to the specified file descriptor and
// returns the number of characters printed.

int	ft_putstr_int_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		write(fd, &s[count], 1);
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	char str[] = "user_exe";
// 	printf("%d",ft_putstr_int_fd(str, 1));
// 	return (0);
// }