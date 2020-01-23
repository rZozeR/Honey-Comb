/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:57:03 by buerkan           #+#    #+#             */
/*   Updated: 2019/10/21 15:34:02 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		ct;

	ct = 0;
	while (src[ct])
		ct++;
	if (!(dup = malloc(sizeof(char) * (ct + 1))))
		return (0);
	ct = 0;
	while (src[ct])
	{
		dup[ct] = src[ct];
		ct++;
	}
	dup[ct] = '\0';
	return (dup);
}
