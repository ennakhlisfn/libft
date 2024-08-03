/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:32:40 by sennakhl          #+#    #+#             */
/*   Updated: 2023/11/29 14:21:35 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = *lst;
	if (!tmp)
		(*lst) = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list  *new = NULL;
    t_list  *one = NULL;
    t_list  *two = NULL;
    t_list  *three = NULL;
    t_list  *four = NULL;
    t_list  *temp = NULL;

    temp = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    one = malloc(sizeof(t_list));
    two = malloc(sizeof(t_list));
    three = malloc(sizeof(t_list));
    four = malloc(sizeof(t_list));

    new->content = NULL;
    one->content = "1";
    two->content = "2";
    three->content = "3";
    four->content = "4";

    new->next = NULL;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    temp = one;
    ft_lstadd_back(NULL, new);

    while (temp)
    {
        printf("%s\n", temp->content);
        temp = temp->next;
    }
}*/
