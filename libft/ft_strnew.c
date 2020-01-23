/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:01:07 by buerkan           #+#    #+#             */
/*   Updated: 2019/10/21 15:52:03 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	ct;
	char	*str;

	if (!(str = ft_memalloc(size + 1)))
		return (0);
	ct = 0;
	while (ct < size)
	{
		str[ct] = '\0';
		ct++;
	}
	return (str);
}
