/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwpa <jeongwpa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:29:37 by jeongwpa          #+#    #+#             */
/*   Updated: 2023/10/11 11:29:38 by jeongwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static float	ft_powf(int n);
static float	get_n_flag(char c);

float	ft_atof(const char *str)
{
	float	ac;
	float	n_flag;
	int		decimal;

	ac = 0.0;
	while (ft_isspace(*str))
		str++;
	n_flag = get_n_flag(*str);
	while (ft_isdigit(*str))
		ac = ac * 10.0 + (*str++ - '0') * n_flag;
	if (*str == '.')
		str++;
	decimal = 0;
	while (ft_isdigit(*str))
	{
		ac = ac * 10.0 + (*str++ - '0') * n_flag;
		decimal++;
	}
	ac /= ft_powf(decimal);
	return (ac);
}

float	get_n_flag(char c)
{
	if (c == '-')
		return (-1.0);
	return (1.0);
}

static float	ft_powf(int n)
{
	float	ret;

	ret = 1.0;
	while (n--)
		ret *= 10.0;
	return (ret);
}
