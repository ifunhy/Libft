/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:10:52 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 11:17:45 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;

	i = 0;
	if (start + 1 > ft_strlen(s))
		return (ft_strdup(""));
	temp = (char *) malloc(sizeof(char) * len + 1);
	if (temp == NULL)
		return (NULL);
	while (i < len)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

/*
int main()
{
	char str[] = "lorem ipsum dolor sit amet";
	int a = printf("%s\n", ft_substr(str, 400, 20));
	printf("result: %d\n", a);
	return (0);
}
*/
