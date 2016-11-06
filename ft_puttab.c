/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:22:49 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/05 17:57:55 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_puttab(char **tab)
{
	if (*tab)
		while (*tab)
		{
			ft_putstr(*tab++);
			ft_putchar('\n');
		}
}