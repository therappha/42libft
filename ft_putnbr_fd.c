/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:33:44 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/25 19:42:59 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	long	nmbr;

	nmbr = n;
	if (nmbr < 0)
	{
		ft_putchar_fd('-', fd);
		nmbr *= -1;
	}
	if (nmbr < 10)
	{
		ft_putchar_fd(nmbr + '0', fd);
	}
	else
	{
		ft_putnbr_fd(nmbr / 10, fd);
		ft_putchar_fd((nmbr % 10) + '0', fd);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr_fd(atoi(av[1]), 1);
}
