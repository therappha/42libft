/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:36:17 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/04 19:23:08 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(((char)*s), fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}
/*int	main(void)
{
	ft_putendl_fd("Hello, World!", 1);
}*/
