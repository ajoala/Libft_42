/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:06:23 by ajoala            #+#    #+#             */
/*   Updated: 2022/11/28 16:20:15 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	int arr[] = {1, 3, 4, 5};
	int c; 

	c = 5;
	ft_memchr(arr, c, sizeof(arr));
	printf("address of c: %p\n", ft_memchr(arr, c, sizeof(arr)));
	printf("control (address of arr[0]: %p\n", arr);
	printf("control (address of arr[1]): %p\n", arr + 1);
	printf("control (address of arr[2]:: %p\n", arr + 2);
	printf("control (address of arr[4]:: %p\n", arr + 3);
	//printf("control (address of null char):: %p\n", str + 6);
	return 0;
}
*/