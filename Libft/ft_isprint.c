/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:21:46 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 11:45:02 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if the passed character is printable
//returns nonzero if true, 0 if false

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	unsigned char	c;

	c = 128;
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	return (0);
}*/
