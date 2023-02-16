/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:20:31 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/06 15:54:37 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == '\0' && (char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}	

/*

int main(void)
{
	char s[] = "hello";
	int c = 'i';
	printf("address of c: %p\n", ft_strchr(s, c));
	printf("control (address of first char): %p\n", s);
	printf("control (address of second char): %p\n", s + 1);
	printf("control (address of third char):: %p\n", s + 2);
	printf("control (address of null char):: %p\n", s + 5);
	printf("control: %p\n", s + 3);
	return (0);
}
*/