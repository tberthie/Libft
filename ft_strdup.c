/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:33:42 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/07 11:25:59 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!cpy)
		return (NULL);
	while (*s1)
		cpy[i++] = *s1++;
	cpy[i] = '\0';
	return (cpy);
}
