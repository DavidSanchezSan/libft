/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:45:26 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/24 11:45:39 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

// Function that locates the first occurrence of the null-terminated
// string little in the string big,
// where not more than len characters are searched.  Characters
// that appear after a ‘\0’ character are not searched.

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (i <= len)
	{
		if (big[i] == little[j])
		{
			z = i;
			while (big[z++] == little[j] && little[j++] != '\0')
			{
				if (little[j] == '\0')
					return ((char *)&big[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*big = "FoBBo Bar Baz";
	const char	*little = "Bo";
	char		*ptr;

	ptr = ft_strnstr (big, little, 12);
	printf("%s\n", ptr);
	printf("%s\n", strnstr(big, little, 12));
	return (0);
}
*/