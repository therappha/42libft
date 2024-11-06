/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:44:04 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/05 23:13:14 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mem[i] == (unsigned char)c)
			return ((void *)(mem + i));
		i++;
	}
	return (NULL);
}
// #include "tests.h"
// int	main(void)
// {
// 	char buffer[13] = "Hello, World!";
// 	char *buffermem;
// 	buffermem = (char *)ft_memchr(buffer, 'W', 13);
// 	printf("%s", buffermem);
// }
