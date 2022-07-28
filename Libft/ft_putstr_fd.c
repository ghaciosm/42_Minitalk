/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:37:20 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/11 19:26:38 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main()
{
	int	a = open("abc.txt",O_WRONLY);
	int	b = open("def.txt",O_WRONLY);
	printf("%d, %d\n", a, b);
	ft_putstr_fd("asahkjdh", a);
	ft_putstr_fd("kaldjslkj", b);
}*/
