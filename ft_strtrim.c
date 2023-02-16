/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:51:32 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/06 17:47:57 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (!(ft_strchr(set, s1[i])))
			break ;
		i++;
	}
	return (i);
}

static int	find_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (!(ft_strchr(set, s1[len - i - 1])))
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + start, end - start + 1);
	return (ptr);
}

/*
int main(void)
{
	char str[] = "lorem ipsum sit amet";
	char set[] = "te";
	printf("copy of string str is %s\n", ft_strtrim(str, set));
}
*/