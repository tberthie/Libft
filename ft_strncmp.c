/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:16:13 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 12:58:55 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s1 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (!n ? 0 : *(unsigned char*)s1 - *(unsigned char*)s2);
}
