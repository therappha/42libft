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

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while((s1[i] == s2[i]) && s1[i] && s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}