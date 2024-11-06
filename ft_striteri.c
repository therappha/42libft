/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:57:35 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/06 01:19:32 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// #include "tests.h"

// char ft_swapcase(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return c - 32;
// 	else if (c >= 'A' && c <= 'Z')
// 		return c + 32;
// 	return (c);
// }
// void print_odd(char c, unsigned int i)
// {
// 	if (i % 2 != 0)
// 		printf("%c", c);
// 	else
// 		printf("%d", i);

// }
// void apply_swapcase(unsigned int i, char *c)
// {
// 	*c = ft_swapcase(*c);
// }
// void apply_printodd(unsigned int i, char *c)
// {
// 	print_odd(*c, i);
// }
// #include "tests.h"
// int main(int ac, char **av)
// {
// 	char *str = av[1];
// 	ft_striteri(str, apply_swapcase);
// 	printf("After: %s\n\n", str);

// 	ft_striteri(str, apply_printodd);
// }
