/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:53:24 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/22 16:39:09 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
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

 void 	*ft_calloc(size_t nmemb, size_t size)
 {
	if (!nmemb || !size)
		return (NULL);
	void	*mem = (void *)malloc(size * nmemb);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (size * nmemb));
	return (mem);
 }
