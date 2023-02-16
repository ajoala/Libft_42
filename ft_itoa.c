/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:28:00 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/06 18:15:02 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	findlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_remainder(char *str, int n, size_t len, size_t i)
{
	while (i < len)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len --;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = findlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		i = 2;
	}
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
		n = -n;
	}
	ft_remainder(str, n, len, i);
	str[len] = '\0';
	return (str);
}

/*
int main(void)
{
	int n;

	n = -9;
	printf("the resulting string: %s\n", ft_itoa(n));
}
*/