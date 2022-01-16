/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:11:53 by tel-mouh          #+#    #+#             */
/*   Updated: 2022/01/16 05:46:15 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"
#include <stdio.h>
int main(void)
{
	t_list	*stack_a;
	t_list	*stack_b;
		
	stack_a = NULL;
	stack_b = NULL;
	push(&stack_b, ft_lstnew(3));
	push(&stack_b, ft_lstnew(2));
	push(&stack_b, ft_lstnew(1));
	// push(&stack_a, ft_lstnew(2));
	// pop(&stack_a);
	// ft_pa(&stack_a , &stack_b);
	// ft_pa(&stack_a , &stack_b);
	// push(&stack_a, ft_lstnew(1));

	// ft_lstadd_back(&stack_b, ft_lstnew(15));
	// printf("%d",stack_a->next->content);
	ft_ra(&stack_b);
	printf("%p",stack_b->prev->next);
	// ft_free(&stack_a);
	ft_free(&stack_b);
	
	return 0;
}
