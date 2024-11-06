/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:53:24 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/06 00:37:20 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (!nmemb || !size)
		return (malloc(0));
	mem = (void *)malloc(size * nmemb);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (size * nmemb));
	return (mem);
}
// #include "tests.h"
// int main(void)
// {
// 	char *buffer = calloc(10, sizeof(char));
// 	char *buffer_ft = ft_calloc(10, sizeof(char));
// 	int i = 0;
// 	printf("Original:");
// 	while ( i < 10)
// 	{
// 		printf(" %d", (unsigned char)buffer[i]);
// 		i++;
// 	}
// 	 i = 0;
// 	printf("\nMine:    ");
// 	while ( i < 10)
// 	{
// 		printf(" %d", (unsigned char)buffer_ft[i]);
// 		i++;
// 	}
	// free(buffer);
	// free(buffer_ft)
// }
