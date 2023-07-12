/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen aarponen@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:37:25 by aarponen          #+#    #+#             */
/*   Updated: 2023/07/05 10:09:39 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
*/
int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa_2(char *arr, int len, int n)
{
	int	i;

	i = len - 1;
	arr [len] = '\0';
	if (n == 0)
		arr[0] = '0';
	if (n == -2147483648)
		ft_strlcpy(arr, "-2147483648", 12);
	if (n < 0 && n != -2147483648)
	{
		arr[0] = '-';
		n = -n;
	}
	while ((i > 0 || (i == 0 && n > 0)) && n != -2147483648)
	{
		arr[i] = (n % 10 + '0');
		n = n / 10;
		i--;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*arr;

	len = ft_len(n);
	arr = malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);
	ft_itoa_2 (arr, len, n);
	return (arr);
}
/*
int	main(void)
{
	int		n;
	char	*arr;

	n = -2147483648;
	arr = ft_itoa(n);
	printf("%s\n", arr);
	free(arr);
	return (0);
}*/
