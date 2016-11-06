/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:57:41 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/02 21:49:44 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	while (n-- > 0)
		*s1++ = *s2++;
	return (dst);
}
