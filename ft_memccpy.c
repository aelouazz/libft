/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 03:46:45 by aelouazz          #+#    #+#             */
/*   Updated: 2019/04/14 15:00:23 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *desty;
	unsigned char *srcy;

	desty = (unsigned char*)dest;
	srcy = (unsigned char*)src;
	while (n-- > 0)
	{
		*(desty++) = *srcy;
		if (*(srcy++) == (unsigned char)c)
			return ((void*)(desty));
	}
	return (NULL);
}
