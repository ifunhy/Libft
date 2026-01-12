/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:28:35 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 18:09:48 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	minus;

	i = 0;
	num = 0;
	minus = 1;
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			minus *= -1;
		i++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (minus * num);
}
// 예외처리
// 1. 공백일 때 while 반복하다 문자 만나면 while 종료
// 2. 공백이 아닌 부호를 만나면 판단 -> 만약 부호가 '-'라면 * (-1)
// 3. str이 0 ~ 9 일때만 while 만복하여 결과값 구함
// 4. 숫자가 아닌 다른 문자가 들어오면 종료
// 5. (마이너스 부호 * 결과값)을 리턴
/*
int	ft_whitespace(const char *nptr)
{
	int	i;

	i = 0;
	while (9 <= nptr[i] && nptr[i] <= 13 || nptr[i] == 32)
		i++;
	return (nptr[i]);
}

int	ft_minus(const char *nptr)
{
	int	i;
	int	minus;

	i = 0;
	minus = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			minus *= -1;
		i++;
	}
	return (nptr[i]);
}

int	ft_num(const char *nptr)
{
	int	i;

	i = 0;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num);
}

int	ft_atoi(const char *nptr)
{
	ft_whitespace(nptr);
	ft_minus(nptr);
	ft_num(nptr);
	return (ft_minus(nptr) * ft_num(nptr));
}
*/
