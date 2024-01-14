/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:42:31 by rharutyu          #+#    #+#             */
/*   Updated: 2024/01/09 14:42:32 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char symb);

int	main(int argc, char **argv)
{
	int	i;
	int	sum;

	sum = 1;
	i = 0;
	while (argc != sum)
	{
		i = 0;
		while (argv[sum][i] != '\0')
		{
			ft_putchar(argv[sum][i]);
			i++;
		}
		sum++;
		ft_putchar('\n');
	}
}
