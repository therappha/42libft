/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:31:48 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/25 19:43:00 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


void ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(((char)*s), fd);
		s++;
	}
}

/*int	main(void)
{
	ft_putstr_fd("Hello, World!", 1);
}*/
