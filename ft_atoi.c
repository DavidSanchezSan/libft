/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:31:15 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/24 16:40:30 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_delete_space(char *str)
{
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v')
			str++;
		return (str);
	}
	return (str);
}

char	*ft_delete_sign(char *str)
{
	while (*str == '+' || *str == '-')
		str++;
	return (str);
}

int	ft_control_negative(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == '-')
			count++;
		str++;
	}
	if (count % 2 != 0)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	c;
	int	i;
	int	s;

	c = 0;
	s = 1;
	i = 0;
	str = ft_delete_space(str);
	if (ft_control_negative(str))
		s = -s;
	str = ft_delete_sign(str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		i++;
	}
	if (s == -1)
		c = -c;
	return (c);
}
/*
int	main(void)
{
	int c = 0;
	char *str = "     +---+2147483648jdff";
	c = ft_atoi(str);
	printf("%d", c);
	return (0);
}
*/