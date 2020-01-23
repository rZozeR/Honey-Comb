/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:48:09 by buerkan           #+#    #+#             */
/*   Updated: 2020/01/23 18:41:02 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	ft_check_and_join(int res, int fd, char **str, char **line)
{
	int		ct;
	char	*tmp;

	ct = 0;
	if (res == 0 && str[fd] == '\0')
		return (0);
	else
	{
		ct = ft_strlex(str[ct], '\n');
		if ((*str)[ct] == '\n')
		{
			*line = ft_strsub(*str, 0, ct);
			tmp = ft_strdup(&((*str)[ct + 1]));
			free(*str);
			*str = tmp;
			if ((*str)[ct] == '\0')
				ft_strdel(str);
		}
		else
		{
			*line = ft_strdup(*str);
			ft_strdel(str);
		}
		return (1);
	}
}

int			get_next_line(const int fd, char **line)
{
	static char *string[MAX_FD];
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			result;

	if (fd < 0 || fd > MAX_FD || !line)
		return (-1);
	while ((result = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[result] = '\0';
		if (string[fd])
		{
			temp = ft_strjoin(string[fd], buffer);
			free(string[fd]);
			string[fd] = temp;
		}
		else
			string[fd] = ft_strdup(buffer);
		if (ft_strchr(string[fd], '\n'))
			break ;
	}
	return ((result < 0) ? -1 : ft_check_and_join(result, fd, string, line));
}
