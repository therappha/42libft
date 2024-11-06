/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:49:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/06 16:56:24 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	ft_strlcpy(dst + dest_len, src, size - dest_len);
	return (ft_strlen(src) + dest_len);
}
// #include "tests.h"
// int	main(void)
// {
// 	char dest[20] = "Hello, ";
// 	char src[] = "World!";
// 	size_t size = sizeof(dest);

// 	size_t result = ft_strlcat(dest, src, size);
// 	printf("Resulting string: %s\n", dest);
// 	printf("Total length: %zu\n", result);
// }
