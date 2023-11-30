/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:21:38 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:55:28 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first n bytes of memory area str1 and memory area str2
// returns 0 if the two memory areas are identical, otherwise returns 
// the difference between the first two differing bytes

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return ((int)(p1[i] - p2[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "heivaan";
	char	s2[] = "hejvaan";
	size_t	n = 5;

	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
	return (0);
}*/
