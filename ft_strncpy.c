/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:16:09 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 14:13:58 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while (*src && len-- > 0)
		dst[i++] = *src++;
	while (!*src && len-- > 0)
		dst[i++] = '\0';
	return (dst);
}
