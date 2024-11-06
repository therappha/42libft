/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:48:03 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 17:48:03 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include "tests.h"
// int	main(void)
// {
// 	int charvalue = '\0';
// 	printf("Mine: '%d'\n", ft_isprint(charvalue));
// 	printf("Original: '%d'\n", isprint(charvalue));
// }
