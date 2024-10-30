/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:49:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/30 18:53:02 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

}
