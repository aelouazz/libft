/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <aelouazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 00:31:02 by aelouazz          #+#    #+#             */
/*   Updated: 2019/04/21 17:55:12 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** -----------------------------------------------------------------------------
** @s: The string to map                                                       |
** @f: The function to apply to each character of s                            |
** @fresh: The “fresh” string created from the successive applications of f    |
** -----------------------------------------------------------------------------
*/

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*ptr2;
	char	*fresh;

	if (!s || !(fresh = ft_memalloc((size_t)ft_strlen((char *)s) + 1)))
		return (NULL);
	ptr = (char *)s;
	ptr2 = fresh;
	while (*ptr)
		*(ptr2++) = f(*(ptr++));
	return (fresh);
}
