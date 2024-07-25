/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwpa <jeongwpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 00:47:49 by jeongwpa          #+#    #+#             */
/*   Updated: 2024/07/26 02:37:40 by jeongwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
    void	*new_ptr;

    if (!ptr)
        return (malloc(new_size));
    if (new_size == 0)
    {
        free(ptr);
        return (malloc(1));
    }
    new_ptr = malloc(new_size);
    if (!new_ptr)
        return (NULL);
    if (old_size < new_size)
        ft_memcpy(new_ptr, ptr, old_size);
    else
        ft_memcpy(new_ptr, ptr, new_size);
    free(ptr);
    return (new_ptr);
}