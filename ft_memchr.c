/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:21:46 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 20:47:30 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		i;
	const unsigned char	*s1;

	i = c;
	s1 = s;
	while (n-- > 0)
		if (*s1++ == (unsigned char)c)
			return ((void*)(--s1));
	return (NULL);
}
