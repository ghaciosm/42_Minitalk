/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:52:25 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/07/28 11:53:31 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include <signal.h>

void	deneme(int signal)
{
	static char	a;
	static int	b;

	if (signal == SIGUSR1)
		a = a | 1;
	if (b == 7)
	{
		ft_putchar_fd(a, 1);
		a = 0;
		b = -1;
	}
	b++;
	a = a << 1;
}

int	main(void)
{
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n\n", 1);
	signal(SIGUSR1, deneme);
	signal(SIGUSR2, deneme);
	while (1)
		pause();
	return (0);
}
