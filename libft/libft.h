/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buerkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:01:18 by buerkan           #+#    #+#             */
/*   Updated: 2020/01/23 18:12:08 by buerkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_strcat(char *des, const char *src);
char				*ft_strdup(const char *src);
char				*ft_strnew(size_t size);
char				*ft_strjoin(char const *str, char const *str2);
char				*ft_strncpy(char *dest, const char *src, size_t num);
char				*ft_strchr(const char *s, int c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);

void				ft_memdel(void **ap);
void				ft_bzero(void *ptr, size_t num);
void				*ft_memalloc(size_t size);
void				ft_strdel(char **as);

size_t				ft_strlen(const char *str);
size_t				ft_strlex(const char *str, char no);
#endif
