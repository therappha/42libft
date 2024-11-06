/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:32:05 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/05 21:58:55 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	mem = s;
	i = 0;
	while (i < n)
	{
		mem[i] = 0;
		i++;
	}
}
// #include "tests.h"
// int main(void)
// {
// 	int buffer[10] = {255, 255 , 255, 255, 255 ,255 ,255 ,255 ,255, 255};
// 	int buffer_ft[10] = {255, 255 , 255, 255, 255 ,255 ,255 ,255 ,255, 255};
// 	int size = 1;
// 	ft_bzero(buffer_ft, size);
// 	bzero(buffer, size);
// 	int i = 0;
// 	printf("Original:");
// 	while ( i < 10)
// 	{
// 		printf(" %u", (unsigned char)buffer[i]);
// 		i++;
// 	}
// 	 i = 0;
// 	printf("\nMine:    ");
// 	while ( i < 10)
// 	{
// 		printf(" %u", (unsigned char)buffer_ft[i]);
// 		i++;
// 	}
// }
