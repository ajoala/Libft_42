/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:36:33 by ajoala            #+#    #+#             */
/*   Updated: 2022/11/25 14:18:25 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	int source[5] = {1, 2, 30, 4, 5};
	int destination[150];
	size_t i;
	size_t n;
	size_t len;
	char src[] = "hellohello";
	char dest[100];

	i = 0;
	n = sizeof(source);
	len = sizeof(src);
	printf("Let's tryout ft_memcpy on the int array:\n");
	ft_memcpy(destination, source, n);
	while (i < 5)
	{
		printf("source: %d\n", source[i]);
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("destination: %d\n", destination[i]);
		i++;
	}
	printf("Let's tryout ft_memcpy on the string:\n");
	ft_memcpy(dest, src, len);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}	
*/