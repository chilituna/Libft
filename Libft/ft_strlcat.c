/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:52:32 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:51:15 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// size-bounded string concatenation: 
// appends the NUL-terminated string src to the end of dst.
// Appends at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
// Returns the total length of the string it tried to create:
// the initial length of dst plus the length of src.
// NOTE: if NUL is not found within size bytes, dst will not be NUL-terminated 
// and the return value will be size + strlen(src).

#include "libft.h"
/*#include <stdio.h>
//#include <string.h>
//#include <bsd/bsd.h>

size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
*/
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (size + (unsigned int)(ft_strlen(src)));
	while (dst[i] && i < size)
		i++;
	if (dst[i] != '\0')
		return (size + (unsigned int)(ft_strlen(src)));
	while (src[j] && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(void)
{
	const char		src[] = "land";
//	const char		src2[] = "land"; 
	char			dst[] = "Wonder";
//	char			dst2[] = "Wonder";
	unsigned int	size = 0;
	printf("%s\n", dst);
	printf("%d\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
//	printf("%s\n", dst2);
//	printf("%ld\n", strlcat(dst2, src2, size));
//	printf("%s\n", dst2);
	return (0);
}*/
