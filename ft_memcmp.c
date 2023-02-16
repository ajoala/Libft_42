/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:01:07 by ajoala            #+#    #+#             */
/*   Updated: 2022/11/25 15:12:20 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	if (n == 0)
		return (0);
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)(ptr1[i] - ptr2[i]));
		i++;
	}
	return (0);
}

/*
int main(void)

{
	//char str1[] = "Hello";
	//char str2[] = "Hello";
	int array[3] = {1, 2, 6};
	int array2[3] = {1, 2, 6};
	//size_t num1;
	size_t num2;
	
	//num1 = 3 * sizeof(char);
	num2 = 3 * sizeof(int);
	//printf("%d\n", ft_memcmp(str1, str2, num1));
	printf("%d\n", ft_memcmp(array, array2, num2));
	
}
*/