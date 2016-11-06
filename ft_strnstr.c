/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:56:42 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 20:53:30 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int	n;

	n = ft_strlen(little);
	len = (len > ft_strlen(big) ? ft_strlen(big) : len);
	if (n == (int)len)
		return (!ft_strcmp(big, little) ? (char*)big : NULL);
	else if (n > (int)len)
		return (NULL);
	i = 0;
	while (i++ + n <= (int)len)
		if (!ft_strncmp(big++, little, n))
			return ((char*)--big);
	return (NULL);
}
