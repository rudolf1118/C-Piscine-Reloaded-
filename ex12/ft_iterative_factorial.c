/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:44:32 by rharutyu          #+#    #+#             */
/*   Updated: 2024/01/08 16:47:09 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	recursive;

	recursive = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		recursive *= nb;
		nb --;
	}
	return (recursive);
}
