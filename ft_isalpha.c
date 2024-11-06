/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:12:16 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 18:12:16 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// #include "tests.h"
// int	main(int ac, char **av)
// {

// 	if (ac == 2)
// 	{	printf("Mine: '%d'\n", ft_isalpha(av[1][0]));
// 		printf("Original: '%d'\n", isalpha(av[1][0]));
// 	}
// }
