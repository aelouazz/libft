/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 04:30:53 by aelouazz          #+#    #+#             */
/*   Updated: 2019/04/14 15:00:31 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				count;
	unsigned char		*desty;
	const unsigned char	*srcy;

	desty = (unsigned char *)dst;
	srcy = (unsigned char *)src;
	count = 0;
	if (srcy < desty)
		while (++count <= len)
			desty[len - count] = srcy[len - count];
	else
		while (len-- > 0)
			*(desty++) = *(srcy++);
	return (dst);
}
