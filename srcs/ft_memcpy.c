/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:16:09 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 21:16:09 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>

 void	*ft_memcpy(void *dest, const void *src, size_t n)
 {
	unsigned char	*src_bytes;
	unsigned char	*dest_bytes;
	size_t			i;

	i = 0;
	src_bytes = (unsigned char *)src;
	dest_bytes = (unsigned char *)dest;
	while(i < n)
	{
		dest_bytes[i] = src_bytes[i];
		i++;
	}
	dest = (((void *)dest_bytes));
	return (dest);
 }
