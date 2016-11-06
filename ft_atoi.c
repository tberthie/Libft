/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:33:26 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/04 20:45:05 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int neg;
	int out;

	out = 0;
	while (*str > -1 && *str <= 32)
		str++;
	neg = (*str == '-' ? -1 : 1);
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		out *= 10;
		out += *str++ - '0';
	}
	return (out * neg);
}
