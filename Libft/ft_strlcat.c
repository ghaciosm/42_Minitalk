/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:30:45 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/14 09:30:48 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	a = ft_strlen(dst);
	if (dstsize <= sizedst)
		return (dstsize + sizesrc);
	i = 0;
	while (src[i] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (sizedst + sizesrc);
}
/*
int	main()
{
	char	*ilk = "42";
	char	*ikinci = "Ecole";

	char	test[] = "TEST";

	char	*c = malloc(sizeof(char) * (ft_strlen(ilk) + ft_strlen(ikinci) + 1));
	
	printf("%zu\n", ft_strlcat(c, ilk, ft_strlen(ilk) + 1));
	printf("%zu\n", ft_strlcat(c, ikinci, ft_strlen(ikinci) + ft_strlen(ilk) + 1));
	printf("%s\n", c);
}*/
