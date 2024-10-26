/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:43:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/26 19:59:14 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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
	int		start;
	int		end_s1;
	int		end_set;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end_s1 = ft_strlen(s1);
	end_set = ft_strlen(set);
	while (s1[start] == set[start] && s1[start])
		start++;
	if (start == end_s1)
		return (ft_strndupmod(s1, start, start));
	if (set[start] != '\0')
		start = 0;
	while (set[end_set] == s1[end_s1] && end_set >= 0)
	{
		end_set--;
		end_s1--;
	}
	if (end_set != -1)
		end_s1 = ft_strlen(s1);
	return (ft_strndupmod(s1, start, end_s1));
}
// int	main(void)
// {
// 	char *str = "";
// 	str = ft_strtrim(str, "");
// 	printf("%s\n", str);
// }
