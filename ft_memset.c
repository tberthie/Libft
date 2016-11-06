/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:52:27 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/02 21:50:11 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	i;
	int				pos;
	char			*str;

	str = b;
	pos = 0;
	i = c;
	while (len-- > 0)
		str[pos++] = i;
	return (b);
}
