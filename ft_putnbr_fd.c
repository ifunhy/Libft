/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:54:08 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 22:38:41 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long long	num;
	char		c;

	if (fd < 0)
		return ;
	num = (long long) n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num / 10 != 0)
		ft_putnbr_fd(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}
/*
int main()
{
	ft_putnbr_fd(0, 1);
}
*/
