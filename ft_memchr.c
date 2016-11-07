/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:21:46 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/07 11:46:04 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		i;
	const unsigned char	*s1;

	i = c;
	s1 = s;
	while (n--)
		if (*s1++ == (unsigned char)c)
			return ((void*)(s1 - 1));
	return (NULL);
}
