/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:06:24 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:51:59 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of the null-terminated string s2 in the 
// string s1, where not more than n characters are searched
// characters that appear after a `\0' character are not searched
// returns a pointer to the first character of the first occurrence of 
// s2 in s1, or NULL if s2 is not part of s1

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s2[j] == s1[i + j] && i + j < n && s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char		*s1;
	const char		*s2;
	unsigned int	n;

	s1 = "hellohi";
	s2 = "hi";
	n = 7;
	printf("%s\n", ft_strnstr(s1, s2 n));
	return (0);
}*/
