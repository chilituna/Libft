/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:04:30 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:53:18 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// scans the initial n bytes of the memory area pointed to by s 
// for the first instance of c.
// returns a pointer to the matching byte or NULL if the character 
// does not occur in the given memory area.

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	x;

	i = 0;
	p = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == x)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "hello";
	int		c = 108;
	size_t	n = 4;

	printf("%p\n", ft_memchr(s, c, n));
	printf("%p\n", memchr(s, c, n));
	return (0);
}*/
