/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:38:35 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:52:44 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// erases the data in the n bytes of the memory 
// starting at the location pointed to by s, by writing zeros 
// (bytes containing '\0') to that area.

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "hello";
	size_t	n = 4;

	printf("%s\n", s);
	ft_bzero(s, n);
	printf("%s\n", s);
	printf("%s\n", s + 4);
}*/
