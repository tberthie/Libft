/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:54:23 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 12:28:02 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	char	i;

	i = c;
	while (*s)
		if (*s++ == i)
			return ((char*)--s);
	return (!i ? (char*)s : NULL);
}
