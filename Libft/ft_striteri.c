/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:20:49 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:01:09 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.

#include "libft.h"
/*#include <stdio.h>

void	ft_change(unsigned int i, char *c)
{
	*c = *c + (char)i;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "Hello";

	ft_striteri(s, ft_change);
	printf("%s\n", s);
	return(0);
}*/
