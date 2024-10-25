/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:45:59 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/25 15:30:37 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
// needs to be redone

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*src_bytes;
	unsigned char	*dest_bytes;

	src_bytes = (unsigned char *)src;
	dest_bytes = (unsigned char *)dest;
	temp = (unsigned char *)malloc(n);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < n)
	{
		temp[i] = src_bytes[i];
		dest_bytes[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest = (void *)dest_bytes);
}
