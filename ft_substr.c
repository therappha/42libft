/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:37:05 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/30 17:19:44 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;
	unsigned int	strlen;

	i = 0;
	strlen = (unsigned int)ft_strlen(s);
	if (start >= strlen)
	{
		substr = (char *)malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	if (len > strlen - start)
		len = strlen - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len && *s)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
