/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:56:34 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/01 19:16:04 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Using malloc, generate a string representing the integer value received as
// an argument. Negative numbers have to be handled.

static char	*negative_special_case(int *n)
{
	char	*c;

	if (*n == -2147483648)
	{
		c = ((char *)malloc(12));
		if (c == NULL)
			return (NULL);
		return (c = "-2147483648");
	}
	return (NULL);
}

static void	negative_sign(int *n, int *is_negative, int *len)
{
	if (*n < 0)
	{
		*n = -*n;
		*is_negative = 1;
		(*len)++;
	}
}

static void	calculate_len(int *n, int *len, int *temp)
{
	if (*n == 0)
	{
		*len = 1;
		return ;
	}
	while (*temp > 0)
	{
		*temp = *temp / 10;
		(*len)++;
	}
}

char	*ft_itoa(int n)
{
	char	*c;
	int		len;
	int		temp;
	int		is_negative;

	temp = n;
	len = 0;
	is_negative = 0;
	negative_special_case(&n);
	negative_sign(&n, &is_negative, &len);
	calculate_len(&n, &len, &temp);
	c = malloc((len + 1) * (sizeof(char)));
	if (c == NULL)
		return (NULL);
	c[len] = '\0';
	len--;
	while (n > 0)
	{
		c[len] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	if (is_negative)
		c[0] = '-';
	return (c);
}

// int	main(void)
// {
// 	int		n;
// 	char	*c;

// 	n = 10;
// 	c = ft_itoa(n);
// 	printf("%s", c);
// 	return (0);
// }
