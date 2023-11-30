/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:50:13 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:50:12 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of c in the string pointed to by s
// returns a pointer to the located character, or NULL if no match was found.
// the terminating null byte is considered part of the string:
// if c is '\0', the function locates the terminating '\0'.

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	*s;
	int			c;

	s = (void*)0;
	c = '\0';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}*/
