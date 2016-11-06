/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:04:04 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/02 21:49:21 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*s1;
	const char		*s2;
	unsigned char	i;

	i = c;
	s1 = dst;
	s2 = src;
	while (n-- > 0)
	{
		*s1++ = *s2;
		if (*s2++ == c)
			return (s1);
	}
	return (NULL);
}
