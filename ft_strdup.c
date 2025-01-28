/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:19:56 by dasanche          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:16 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function that returns a pointer to a new
// string which is a duplicate of the string s.
// Memory for the new string is obtained with
// malloc(3), and can be freed with free(3).

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s, len + 1);
	return (copy);
}
