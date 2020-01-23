/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:58:15 by buerkan           #+#    #+#             */
/*   Updated: 2019/10/18 12:30:58 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	size_t	ct;

	ct = 0;
	while (ct < num && src[ct] != '\0')
	{
		dest[ct] = src[ct];
		ct++;
	}
	while (ct < num)
	{
		dest[ct] = '\0';
		ct++;
	}
	return (dest);
}
