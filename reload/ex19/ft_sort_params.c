/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:40 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/11 16:42:33 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(int i, char *av[])
{
	int	j;

	j = 0;
	while (av[i][j] == av[i + 1][j] && av[i][j] && av[i + 1][j])
		j++;
	return (av[i + 1][j] - av[i][j]);
}

void	ft_print_params(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char *av[])
{
	int		i;
	char	*swap;
	int		redo;

	redo = 0;
	while (redo < ac)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(i, av) < 0)
			{
				swap = av[i];
				av[i] = av[i + 1];
				av[i + 1] = swap;
			}
			i++;
		}
		redo++;
	}
	ft_print_params(ac, av);
}
