/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:06:27 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/09 16:44:36 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ps;

	ps = malloc(size * count);
	if (ps == 0)
		return (0);
	ft_bzero(ps, size * count);
	return (ps);
}
/*
int	main()
{
	ft_calloc(5, sizeof(char));
}*/
