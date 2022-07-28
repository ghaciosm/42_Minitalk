/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:35:22 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/07 15:35:24 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//kaç adet string dizisi elemanı olduğunu hesaplar. 
//"fatih-fatih-fatih" , '-' cevap 2 dir 2 adet ayırıcı var çünkü
unsigned int	str_in_array(const char *s, char delimiter)
{
	unsigned int	qnt;

	qnt = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			qnt++;
		}
	}
	return (qnt);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	arr = (char **) ft_calloc(str_in_array(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	a = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			arr[++a -1] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(arr[a -1], s - j, j + 1);
		}
	}
	return (arr);
}
/*
int main()
{
	char *a ="ali,esma,gulcin,";

	char **mystr = ft_split(a, ',');
	int i = 0;
	while (mystr[i])
	{
		printf("%s\n",mystr[i]);

		i++;
	}
}*/
