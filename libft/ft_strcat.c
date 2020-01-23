/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:59:17 by buerkan           #+#    #+#             */
/*   Updated: 2019/10/17 14:52:40 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *des, const char *src)
{
	int ct;
	int ct2;

	ct = 0;
	while (des[ct])
		ct++;
	ct2 = 0;
	while (src[ct2])
	{
		des[ct] = src[ct2];
		ct++;
		ct2++;
	}
	des[ct] = '\0';
	return (des);
}
