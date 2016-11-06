/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:40:50 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/02 21:53:19 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int		i;

	if (!*little)
		return ((char*)big);
	while (*big)
	{
		i = 0;
		while (big[i] && little[i] && big[i] == little[i])
			i++;
		if (!little[i])
			return ((char*)big);
		big++;
	}
	return (NULL);
}
