/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:58:32 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 20:37:53 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dst;
	i = 0;
	if (src < dst)
		while (len-- > 0)
			s2[len] = s1[len];
	else
		while (len-- > 0)
			s2[i++] = *s1++;
	return (dst);
}
