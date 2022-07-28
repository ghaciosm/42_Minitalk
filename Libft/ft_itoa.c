/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:11:42 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/08 10:28:02 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;

	digit = get_len(n);
	str = (char *) ft_calloc(digit + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		*str = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(str, "-2147483648", digit + 1);
			return (str);
		}
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(str + --digit) = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int	main()
{
	printf("%s", ft_itoa(-128967264));
}*/
