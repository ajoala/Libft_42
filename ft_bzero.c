/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:50:58 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/06 18:12:20 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ft_memset(s, 0, n);
		i++;
	}
}

/*
int main (void)
{
	char se[11] = "hellohello";
	size_t n;

	n = 0;
	printf("se: %s\n", se);
	ft_bzero(se, n);
	printf("new se: %s\n", se);
	return (0);
}
*/