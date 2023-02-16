/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:08:33 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/06 15:54:03 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
	char str[] = "heloo";
	int c;

	c = '\0';
	ft_strrchr(str, c);
	printf("address of c: %p\n", ft_strrchr(str, c));
	printf("control (address of first char): %p\n", str);
	printf("control (address of second char): %p\n", str + 1);
	printf("control (address of third char):: %p\n", str + 2);
	printf("control (address of fourth char):: %p\n", str + 3);
	printf("control (address of fifth char):: %p\n", str + 4);
	printf("control (address of null char):: %p\n", str + 5);
	printf("control print whole string: %s\n", str);
}
*/