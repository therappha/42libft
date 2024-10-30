/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:43:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/30 17:18:36 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static int	ft_strhas(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

static char	*ft_strndupmod(const char *str, int start, int end)
{
	char	*newstr;
	int		i;
	int		total_len;

	i = 0;
	if (end < start && str[end] == '\0')
	{
		newstr = (char *)malloc(1);
		newstr[0] = '\0';
		return (newstr);
	}
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_strhas(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strndupmod(s1, start, end));
	while (ft_strhas(set, s1[end]))
		end--;
	return (ft_strndupmod(s1, start, end));
}
// int	main(void)
// {
// 	char *str = "        ";
// 	str = ft_strtrim(str, " ");
// 	printf("%s\n", str);
// }
