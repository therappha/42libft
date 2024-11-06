/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:16:24 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 19:16:24 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include "tests.h"
// int	main(int ac, char **av)
// {
// 	char *str1 = av[1];
// 	char *str2 = av[2];

// 	size_t size = atoi(av[3]);
// 	printf("Original: %d\n", strncmp(str1, str2, size));
// 	printf("Mine: %d\n", ft_strncmp(str1, str2, size));

// }
