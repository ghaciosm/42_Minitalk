/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:08:33 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/09 16:41:22 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main()
{
	int	i = open("abc.txt", O_WRONLY);
	int	b = open("def.txt", O_WRONLY);
	printf(("%d, %d\n"), i, b);
	ft_putendl_fd("wehjb", i);
	ft_putendl_fd("kshfkjd", b);
}*/
//s yi yazar sona enter basar.
