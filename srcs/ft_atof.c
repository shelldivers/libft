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

static float	ft_pow(int n);

int	ft_atof(const char *str)
{
	float	ac;
	float	n_flag;
	int		decimal;

	// 공백 문자를 건너뛴다.
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;

	// 부호를 확인한다.
	n_flag = 1.0;
	else if (*str == '-')
	{
		n_flag = -1.0;
		str++;
	}

	// 정수 부분을 계산한다.
	while (ft_isdigit(*str))
		ac = ac * 10.0 + (*str++ - '0') * n_flag;

	// 소수점을 건너뛴다.
	if (*str == '.')
		str++;

	// 소수 부분을 계산한다.
	decimal = 0;
	while (ft_isdigit(*str))
	{
		ac = ac + (*str++ - '0') * n_flag;
		decimal++;
	}
	ac /= ft_pow(decimal);
	return (ac);
}

static float	ft_pow(int n)
{
	float	ret;

	ret = 1.0;
	while (n--)
		ret *= 10.0;
	return (ret);
}
