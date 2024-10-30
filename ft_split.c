/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:23:28 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/30 18:30:08 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (words);
}

static char	*ft_strndupmod(const char *str, int start, int end)
{
	char	*newstr;
	int		i;
	int		total_len;

	i = 0;
	total_len = end - start + 1;
	newstr = (char *)malloc(total_len + 1);
	if (!newstr)
		return (NULL);
	while (i < total_len)
	{
		newstr[i] = str[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		arrnmb;
	char	**array;
	int		words;

	words = ft_countwords(s, c);
	array = (char **)malloc((words + 1) * sizeof(char *));
	if (!array || !s)
		return (NULL);
	i = 0;
	arrnmb = 0;
	while (s[i] && arrnmb < words)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		array[arrnmb++] = ft_strndupmod(s, i, j - 1);
		i = j;
	}
	array[arrnmb] = NULL;
	return (array);
}

// int	main(void)
// {
// 	char str[] = "             ";
// 	int i = 0;
// 	char **array;
// 	array = ft_split(str, '\0');
// 		printf("'%s' splitted into:\n", str);
// 	while (array[i])
// 	{
// 		printf("%s\n", array[i]);
// 		free(array[i]);
// 		i++;
// 	}
// 	free(array);
//  }
