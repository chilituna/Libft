/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:52:35 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:50:22 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the last occurrence of c in the string pointed to by s
// returns a pointer to the located character, or NULL if no match was found.
// the terminating null byte is considered part of the string:
// if c is '\0', the function locates the terminating '\0'.

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s;
	int			c;

	s = "terve terve";
	c = '\0';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}*/
