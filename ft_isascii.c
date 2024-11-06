/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:26:00 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 17:26:00 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include "tests.h"
// int	main(void)
// {
// 	int charvalue = 'a';
// 	printf("Mine: '%d'\n", ft_isascii(charvalue));
// 	printf("Original: '%d'\n", isascii(charvalue));
// }
