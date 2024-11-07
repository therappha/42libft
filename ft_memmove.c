/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:53:26 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/07 17:50:12 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_bytes;
	const unsigned char	*src_bytes;
	size_t				i;

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
	else if (dest_bytes > src_bytes)
	{
		while (n > i)
		{
			dest_bytes[n - 1] = src_bytes[n - 1];
			n--;
		}
	}
	return (dest);
}
// #include "tests.h"
// int main()
// {
// 	char src[] = "Hello, World!";
// 	char dest[50];
// 	char src_ft[] = "Hello, World!";
// 	char dest_ft[50];

// 	printf("TEST 1 Before memmove: src = '%s',
//  dest = '%s'\n", src, dest);
// 	memmove(dest, src, 13);
// 	printf("After memmove: src = '%s',
//  dest = '%s'\n", src, dest);
// 	printf("TEST 1 Before ft_memmove: src_ft = '%s',
// dest_ft = '%s'\n", src_ft, dest_ft);
// 	ft_memmove(dest_ft, src_ft, 13);
// 	printf("After ft_memmove: src_ft = '%s',
//  dest_ft = '%s'\n\n", src_ft, dest_ft);

// 	char str[] = "Hello, World!";
// 	printf("TEST 2 Before memmove: str = '%s'\n", str);
// 	memmove(str + 6, str, 6);
// 	printf("After memmove: str = '%s'\n", str);
// 	char str1[] = "Hello, World!";
// 	printf("TEST 2 Before ft_memmove: str1 = '%s'\n", str1);
// 	ft_memmove(str1 + 6, str1, 6);
// 	printf("After ft_memmove: str1 = '%s'\n\n", str1);

// 	char str2[] = "Hello, World!";
// 	printf("TEST 3 Before memmove: str2 = '%s'\n", str2);
// 	memmove(str2, str2 + 7, 6);
// 	printf("After memmove: str2 = '%s'\n", str2);
// 	char str3[] = "Hello, World!";
// 	printf("TEST 3 Before ft_memmove: str3 = '%s'\n", str3);
// 	ft_memmove(str3, str3 + 7, 6);
// 	printf("After ft_memmove: str3 = '%s'\n", str3);
// }
