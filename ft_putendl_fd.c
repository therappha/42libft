/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:36:17 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/25 19:42:58 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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

