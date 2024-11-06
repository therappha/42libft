/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:22:40 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 17:22:40 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
// #include "tests.h"
// int	main(int ac, char **av)
// {

// 	if (ac == 2)
// 	{	printf("Mine: '%d'\n", ft_isalnum(av[1][0]));
// 		printf("Original: '%d'\n", isalnum(av[1][0]));
// 	}
// }
