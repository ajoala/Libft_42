/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:14:38 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/10 17:33:08 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function to find how many words are in the string s*/
static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

/*function to copy the word from original string 
to a separate string and allocate memory*/
static char	*ft_get_str(const char *s, int start, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (s[i] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		t;
	int		start;

	tab = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	t = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			tab[t++] = ft_get_str(s, start, i - start);
	}
	tab[t] = NULL;
	return (tab);
}
