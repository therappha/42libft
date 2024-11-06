/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:16:09 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/05 23:53:53 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_bytes;
	unsigned char	*dest_bytes;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (dest);
	src_bytes = (unsigned char *)src;
	dest_bytes = (unsigned char *)dest;
	while (i < n)
	{
		dest_bytes[i] = src_bytes[i];
		i++;
	}
	dest = (((void *)dest_bytes));
	return (dest);
}
//255:  00000000 00000000 00000000 11111111
//511:  00000000 00000000 00000001 11111111
//512:  00000000 00000000 00000010 00000000
// #include "tests.h"
// int	main(void)
// {
// 	int number = 0;
// 	int number_ft = 0;
// 	int number1 = 511;


// 	memcpy(&number, &number1, 1);
// 	ft_memcpy(&number_ft, &number1, 1);

// 	printf("%d\n", number);
// 	printf("%d\n", number_ft);

// 	number = 0;
// 	number_ft = 0;
// 	int number2 = 512;
// 	memcpy(&number, &number2, 1);
// 	ft_memcpy(&number_ft, &number2, 1);

// 	printf("%d\n", number);
// 	printf("%d\n", number_ft);
// }
