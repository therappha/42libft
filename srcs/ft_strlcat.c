/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:52:50 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/22 15:31:19 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dest)
		return (ft_strlen((char *)src));
	if (!src)
		return (ft_strlen((char *)dest));
	if (size == 0)
		return (ft_strlen((char *)src) + ft_strlen((char *)dest));
	while (dest[i])
		i++;
	while (src[j] && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + j);
}
