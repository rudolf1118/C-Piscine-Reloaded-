/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:14:02 by rharutyu          #+#    #+#             */
/*   Updated: 2024/01/12 10:30:27 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	rangeofnums;
	int	*arr;
	int	i;

	rangeofnums = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(rangeofnums * 4);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
