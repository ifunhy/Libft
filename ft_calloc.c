/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:15:30 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 17:49:33 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	size_t			num;

	i = 0;
	num = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (num / count != size)
		return (0);
	temp = (unsigned char *) malloc(count * size);
	if (temp == NULL)
		return (0);
	while (i < num)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}
