/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:08:17 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 11:44:43 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if the passed character is ASCII
//returns nonzero if true, 0 if false

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	unsigned char	c;

	c = 0;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	return (0);
}*/
