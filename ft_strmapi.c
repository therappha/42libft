/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:51:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/07 17:41:44 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include "tests.h"
// char ft_swapcase(unsigned int i, char c)
// {
// 	i = 0;
// 	if (c >= 'a' && c <= 'z')
// 		return c - 32;
// 	else if (c >= 'A' && c <= 'Z')
// 		return c + 32;
// 	return (c);
// }
// int main(int ac, char **av)
// {
// 	char *str = av[1];
// 	char *dest = ft_strmapi(str, ft_swapcase);
// 	printf("After: %s\n\n", dest);
// 	free(dest);
// }
