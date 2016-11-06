/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:55:29 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 20:52:43 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;

	i = ft_strlen(dst);
	ret = i + ft_strlen(src);
	if (i >= size)
		return (ret - i + size);
	size--;
	while (*src && i != size)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (ret);
}
