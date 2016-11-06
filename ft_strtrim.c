/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:32:17 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 21:02:53 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_isspace(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t') ? 1 : 0);
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	size_t	size;

	if (!s)
		return (NULL);
	while (*s && ft_isspace(*s))
		s++;
	size = ft_strlen(s);
	if (size)
		while (ft_isspace(s[size - 1]) && s[size - 1])
			size--;
	new = ft_strndup(s, size);
	if (!new)
		return (NULL);
	return (new);
}
