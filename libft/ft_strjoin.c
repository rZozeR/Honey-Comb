/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:50:23 by buerkan           #+#    #+#             */
/*   Updated: 2019/10/17 19:10:23 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str, char const *str2)
{
	char	*stt;
	size_t	ct;

	if (!str || !str2)
		return (NULL);
	ct = ft_strlen(str) + ft_strlen(str2) + 1;
	stt = ft_strnew(ct);
	if (!stt)
		return (NULL);
	ft_strcat(stt, str);
	ft_strcat(stt, str2);
	return (stt);
}
