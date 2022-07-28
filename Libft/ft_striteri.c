/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:59:17 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/08 14:01:24 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_ft(unsigned int g, char *b)
{
	*b = *b + g;
}

int main()
{
	char	a[] = "aaaaaa";

	ft_striteri(a, &ft_ft);
	printf("%s", a);
}*/
//s stringindeki her karakterin adresine tek tek f fonksiyonu uygular