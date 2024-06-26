/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwpa <jeongwpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:06:49 by jeongwpa          #+#    #+#             */
/*   Updated: 2024/06/26 15:13:04 by jeongwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifdef __cplusplus
extern "C" {
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# else
#  if BUFFER_SIZE < 1
#   error invalid BUFFER_SIZE
#  endif
# endif
# include "ft_type.h"

/* get_next_line.c */
void	remove_list(t_gnl **head, int fd);
char	*get_content_line(t_gnl *node, long len);
char	*get_list_line(t_gnl **head, t_gnl *node);
t_gnl	*get_list(t_gnl **head, int fd);
char	*get_next_line(int fd);

/* get_next_line_utils.c */
char	*ft_content_sub(t_gnl *node, unsigned int start, long len);
long	read_content_heap(t_gnl *node);
long	read_content_stack(t_gnl *node);

# ifdef __cplusplus
}
# endif

#endif
