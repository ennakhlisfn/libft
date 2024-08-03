/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:33:48 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 13:37:48 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*start;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		start = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(start);
	}
	*lst = NULL;
}
