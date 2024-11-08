/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:33:44 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/08 10:41:22 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
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
