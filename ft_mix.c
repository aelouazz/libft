/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:56:03 by aelouazz          #+#    #+#             */
/*   Updated: 2020/10/31 01:35:50 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_mix(double x, double y, double a)
{
	return (x * (1 - a) + y * a);
}
