/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:36:43 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/09 11:36:51 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	int	c = open("OK.txt",O_WRONLY);
	int	i = open("gulcin.txt",O_WRONLY);
	int	b = open("musab.txt",O_WRONLY);
	printf("%d, %d, %d\n", c, i, b);
	ft_putchar_fd('a', c);
	ft_putchar_fd('b', i);
	ft_putchar_fd('c', b);
}*/
//belirtilen dosya tanimliyacisina (fd) c karakterini yazar