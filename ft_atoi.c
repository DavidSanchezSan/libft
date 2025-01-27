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
#include <stdlib.h>
#include <unistd.h>

void	advance_spaces(const char *nptr, int *i)
{
	while (nptr[*i] == ' ' || (nptr[*i] >= 9 && nptr[*i] <= 13))
		(*i)++;
}

void	check_sign(const char *nptr, int *i, int *s)
{
	if (nptr[*i] == '-' || nptr[*i] == '+')
	{
		if (nptr[*i] == '-')
			*s = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *nptr)
{
	int	c;
	int	i;
	int	s;

	c = 0;
	s = 1;
	i = 0;
	advance_spaces(nptr, &i);
	check_sign(nptr, &i, &s);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (c > (INT_MAX / 10) || (c == (INT_MAX / 10)
				&& (nptr[i] - '0') > (INT_MAX % 10)))
		{
			if (s == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		c = c * 10 + (nptr[i++] - '0');
	}
	return (c * s);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = "    42";
	str2 = "   -42abc";
	str3 = "2147483648";
	str4 = "89 52";
	str5 = "51.6";
	printf("ft_atoi(\"%s\") = %d\n", str1, ft_atoi(str1));
	printf("ft_atoi(\"%s\") = %d\n", str2, ft_atoi(str2));
	printf("ft_atoi(\"%s\") = %d\n", str3, ft_atoi(str3));
	printf("ft_atoi(\"%s\") = %d\n", str4, ft_atoi(str4));
	printf("ft_atoi(\"%s\") = %d\n", str5, ft_atoi(str5));
	printf("\n");
	printf("atoi(\"%s\") = %d\n", str1, atoi(str1));
	printf("atoi(\"%s\") = %d\n", str2, atoi(str2));
	printf("atoi(\"%s\") = %d\n", str3, atoi(str3));
	printf("atoi(\"%s\") = %d\n", str4, atoi(str4));
	printf("atoi(\"%s\") = %d\n", str5, atoi(str5));
	return (0);
}
*/