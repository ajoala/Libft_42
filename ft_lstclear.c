/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:36:02 by ajoala            #+#    #+#             */
/*   Updated: 2022/12/10 15:57:18 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!(*lst) || !del)
		return ;
	while ((*lst) != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = temp;
	}
	(*lst) = NULL;
}
