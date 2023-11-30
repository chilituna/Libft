/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:43:00 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:53:59 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// size-bounded string copying:
// copies up to size - 1 characters from the NUL-terminated string src to dst, 
// NUL-terminating the result.
// Returns the total length of the string it tried to create:
// the length of src.

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char			src[] = "rallaa!";
	char			dst[] = "heippa";
	unsigned int	size = 7;

	printf("%s\n", dst);
	printf("%d\n", ft_strlcpy(dst, src, size));
	printf("%s\n", dst);
	return (0);
}*/
