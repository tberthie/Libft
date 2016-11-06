/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:03:00 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 20:50:33 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*mem;
	int		i;

	i = 0;
	mem = malloc(size);
	if (!mem)
		return (NULL);
	while (i < (int)size)
		((char*)mem)[i++] = 0;
	return (mem);
}
