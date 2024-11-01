/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:53:26 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/01 20:31:39 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_bytes;
	const unsigned char	*src_bytes;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	dest_bytes = (unsigned char *)dest;
	src_bytes = (const unsigned char *)src;
	i = 0;
	if (dest_bytes < src_bytes)
	{
		while (i < n)
		{
			dest_bytes[i] = src_bytes[i];
			i++;
		}
	}
	else
	{
		while (n > i)
		{
			dest_bytes[n - 1] = src_bytes[n - 1];
			n--;
		}
	}
	return (dest);
}
