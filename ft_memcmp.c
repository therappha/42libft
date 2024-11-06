/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 00:23:03 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/05 23:41:08 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		i++;
	}
	return (0);
}

//255:  00000000 00000000 00000000 11111111
//511:  00000000 00000000 00000001 11111111
//512:  00000000 00000000 00000010 00000000
// #include "tests.h"
// int	main(void)
// {
// 	int number = 255;
// 	int number1 = 511;
// 	printf("%d\n", memcmp(&number, &number1, 1));
// 	printf("%d\n", ft_memcmp(&number, &number1, 1));
// }
