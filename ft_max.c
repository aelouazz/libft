/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:06:29 by aelouazz          #+#    #+#             */
/*   Updated: 2020/10/31 01:35:39 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *array, int len)
{
	int		i;
	int		max;

	i = 0;
	max = array[i];
	while (i < len)
	{
		if (array[i] > max)
			max = array[i];
		i++;
	}
	return (max);
}