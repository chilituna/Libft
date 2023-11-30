/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:00:27 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 11:44:29 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if the passed character is alphabetic
//returns nonzero if true, 0 if false

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	unsigned char	c;

	c = '?';
	printf ("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
}*/
