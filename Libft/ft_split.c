/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen aarponen@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:46:04 by aarponen          #+#    #+#             */
/*   Updated: 2023/06/07 11:25:47 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
*/
static int	ft_substr_count(const char *str, char c)
{
	int	sub_count;
	int	trigger;

	sub_count = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			sub_count++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (sub_count);
}

static char	*ft_copysub(const char *str, int start, int end)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc((end - start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start + i < end)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static void	ft_freeall(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free (arr[i]);
		i++;
	}
	free (arr);
}

char	**ft_split2(char const *s, char c, char **arr, int start)
{
	size_t	end;
	size_t	row;

	row = 0;
	end = 0;
	while (end <= ft_strlen(s))
	{
		if (s[end] != c && start < 0)
			start = end;
		else if ((s[end] == c || end == ft_strlen(s)) && start >= 0)
		{
			arr[row] = ft_copysub(s, start, end);
			if (arr[row] == NULL)
			{
				ft_freeall(arr);
				return (NULL);
			}
			start = -1;
			row++;
		}
		end++;
	}
	arr[row] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		start;

	arr = malloc((ft_substr_count(s, c) + 1) * sizeof(char *));
	if (!arr || !s)
		return (NULL);
	start = -1;
	return (ft_split2(s, c, arr, start));
}
/*
int	main(void)
{
	char const	*s;
	char		c;
	char		**array;
	int			i;

	s =".....hello!......who.are......you......";
	c = '.';
	array = ft_split(s, c);
	i = 0;
	if (array)
	{
		while (array[i])
		{
			printf ("%s\n", array[i]);
			free(array[i]);
			i++;
		}
	}
	free (array);
	return (0);
}*/
