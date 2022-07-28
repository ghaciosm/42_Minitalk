/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:13:30 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/06 13:13:32 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!*(s + i))
			return (0);
		i++;
	}
	return ((char *)(s + i));
}
/*
int	main()
{
	char	a[] = "abcde";
	char	b = 'x';
	
	printf("%s", ft_strchr(a, b));
}*/
