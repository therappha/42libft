/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 01:22:49 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/07 17:40:34 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
// #include "tests.h"
// int	main(void)
// {
// 	char dest[20] = "";
// 	char src[] = "Hello, World!";
// 	size_t size = sizeof(dest);

// 	size_t result = ft_strlcpy(dest, src, size);
// 	printf("Resulting string: %s\n", dest);
// 	printf("Total length: %zu\n", result);
// }
