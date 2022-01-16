/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 02:17:44 by tel-mouh          #+#    #+#             */
/*   Updated: 2022/01/16 00:39:11 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	push(t_list **lst, t_list *new)
{
	static t_list	*tmp;

	if((*lst) == NULL)
		tmp = NULL;
	new->next = *lst;
	*lst = new;
	if(tmp)
		(*lst)->next->prev = *(lst);
	else
		tmp = new;
	(*lst)->prev = tmp;
}
