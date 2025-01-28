/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:06:01 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:23 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Function that compares only the first (at most) n bytes of s1 and s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}
/*
int	main (void)
{
	char s1[50] = "abcdefgh";
	char s2[50] = "abcdwxyz";

	printf("%d\n",ft_strncmp(s1, s2, 4));
	printf("%d",strncmp(s1, s2, 4));
	return (0);
}
*/