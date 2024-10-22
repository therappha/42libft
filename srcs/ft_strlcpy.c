/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 01:22:49 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/22 15:31:51 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *src, char *dest, unsigned int size)
{
	unsigned int	i;
	int				len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
