/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:02:48 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 20:53:31 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	char	i;

	i = c;
	ret = 0;
	while (*s)
		if (*s++ == i)
			ret = (char*)(s - 1);
	if (!i)
		return ((char*)s);
	return (!ret ? NULL : ret);
}
