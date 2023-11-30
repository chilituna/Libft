/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:42:20 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 11:44:51 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if the passed character is a digit
//returns nonzero if true, 0 if false

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = '0';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	return (0);
}*/
