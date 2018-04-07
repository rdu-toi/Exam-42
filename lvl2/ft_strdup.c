/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 18:46:55 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/04/06 10:00:30 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	char *str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(i * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	printf("%s", ft_strdup("abc123"));
}
