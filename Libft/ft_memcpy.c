/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:36:59 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 12:35:16 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy n bytes from memory area src to memory area dest
//returns a pointer to dest
//if dest and src overlap, memmove() is a safer approach than memcpy()

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[6];
	char	src[] = "Hello";
	size_t	n = 0;

	printf("before: %s\n", dest);
	ft_memcpy(dest, src, n);
	printf("after: %s\n", dest);
	return (0);
}*/
