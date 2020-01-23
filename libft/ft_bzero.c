/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:43:26 by buerkan           #+#    #+#             */
/*   Updated: 2019/10/18 14:45:41 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buffer;
	size_t			ct;

	buffer = (unsigned char *)s;
	ct = 0;
	while (ct < n)
	{
		buffer[ct] = 0;
		ct++;
	}
}
