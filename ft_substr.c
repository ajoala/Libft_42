/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:42:25 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/07 16:44:14 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*sub;

	s_len = ft_strlen(s);
	if (start < s_len && (start + len <= s_len))
		sub = (char *)malloc(sizeof(char) * (len + 1));
	else if ((len > s_len - start) && start < s_len)
		sub = (char *)malloc(sizeof(char) * (s_len - start + 1));
	else
		sub = (char *)malloc(sizeof(char) * 1);
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (i < s_len && j < len)
	{
		sub[j] = (char)s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

/*
int main (void)
{
	char str[] = "welcome";;
	unsigned int start; 
	size_t len;
	
	start = 75; 
	len = 5;
	printf("substring: %s\n", ft_substr(str, start, len));
}
*/