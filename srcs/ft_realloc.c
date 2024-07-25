/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwpa <jeongwpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 00:47:49 by jeongwpa          #+#    #+#             */
/*   Updated: 2024/07/26 00:48:54 by jeongwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size)
{
    void	*new_ptr;

    if (!ptr)
        return (malloc(size));
    if (!size)
    {
        free(ptr);
        return (NULL);
    }
    new_ptr = malloc(size);
    if (!new_ptr)
        return (NULL);
    ft_memcpy(new_ptr, ptr, size);
    free(ptr);
    return (new_ptr);
}