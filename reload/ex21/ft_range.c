/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:24:58 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/11 16:44:29 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*btw;

	a = 0;
	if (min >= max)
	{
		btw = 0;
		return (btw);
	}
	btw = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		btw[a] = min;
		a++;
		min++;
	}
	return (btw);
}
