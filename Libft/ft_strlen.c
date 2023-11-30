/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:31:43 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:13:55 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns the length of the string

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
/*
int	main(void)
{
	const char	*str;

	str = "tenletters";
	printf("%d\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return (0);
}*/
