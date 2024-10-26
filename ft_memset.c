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

#include <stddef.h>
#include <stdio.h>

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
// int	main(void)
// {
// 	char buffer_memset[11] = {0};
// 	ft_memset(buffer_memset, 126, 10);
// 	buffer_memset[10] = '\0';
// 	printf("\nfilling with ft_memset, buffer with ,
//	buffer: '%s'\n",  buffer_memset);
// 	for (unsigned long i = 0; i < sizeof(buffer_memset); i++)
//{
// 	printf("%p", buffer_memset[i]);
// }
// 	printf("\n");
// }
