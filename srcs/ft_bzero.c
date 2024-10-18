/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:32:05 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 20:32:05 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *mem;

	mem = s;
	i = 0;
	while(i < n)
	{
		mem[i] = 0;
		i++;
	}
}
