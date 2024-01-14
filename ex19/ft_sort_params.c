/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:30:12 by rharutyu          #+#    #+#             */
/*   Updated: 2024/01/11 11:14:32 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s2[i] == s1[i])
	{
		i++;
	}
	if (s2[i] - s1[i] > 0)
		return (1);
	else if (s2[i] - s1[i] < 0)
		return (-1);
	return (0);
}

void	ft_putchar(char h);

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i != argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i != argc)
	{
		j = 1;
		while (j != argc)
		{
			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argc, argv);
}
