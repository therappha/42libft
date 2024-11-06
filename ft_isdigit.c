/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:15:17 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 18:15:17 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// #include "tests.h"
// int	main(int ac, char **av)
// {

// 	if (ac == 2)
// 	{	printf("Mine: '%d'\n", ft_isdigit(av[1][0]));
// 		printf("Original: '%d'\n", isdigit(av[1][0]));
// 	}
// }
