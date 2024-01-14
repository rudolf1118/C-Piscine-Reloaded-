/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:49:39 by rharutyu          #+#    #+#             */
/*   Updated: 2024/01/12 09:49:40 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		++i;
	}
	copy = malloc(i * 1);
	while (i >= 0)
	{
		copy[i] = src[i];
		i--;
	}
	return (copy);
}