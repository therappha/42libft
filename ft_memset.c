/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:39:56 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 19:39:56 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	mem = s;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include "tests.h"
// int main(void)
// {
// 	char buffer[10];
// 	char buffer_ft[10];
// 	int size = 10;
// 	ft_memset(buffer_ft, 'a', size);
// 	memset(buffer, 'a', size);
// 	int i = 0;
// 	printf("Original:");
// 	while ( i < sizeof(buffer))
// 	{
// 		printf("%c", (buffer[i]));
// 		i++;
// 	}
// 	 i = 0;
// 	printf("\nMine:    ");
// 	while ( i < sizeof(buffer_ft))
// 	{
// 		printf("%c", (buffer_ft[i]));
// 		i++;
// 	}
// }
