/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 13:53:24 by sebasilve         #+#    #+#             */
/*   Updated: 2026/11/16 01:08:08 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sa(t_node **a)
 {
	t_node	*first;
	t_node	*second;
	
	if (!*a || !(*a)->next)
		return :
	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	write(1, "sa\n", 3);
 }
 
void	sb(t_node **b)
 {
	t_node *first;
	t_node *second;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	write(1, "sb\n", 3);
 }
 
void	ss(t_node **a, t_node **b)
 {
	sa(t_node **a);
	sb(t_node **b);
 }
 
static void	push(t_node **src, t_node **dest)
 {
	t_node *tmp;
	
	if (!*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
 }

void	pa(t_node **a, t_node **b)
 {
	push(b, a);
	write(1, "pa\n", 3);
 }

void	pb(t_node **a, t_node **b)
 {
	push(a, b);
	write(1, "pb\n", 3);
 }
 
static void	rotate(t_node **stack)
{
	t_node *first;
	t_node *last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = first;
	while (last->next)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_node **a)
 {
	rotate(a);
	write(1, "ra\n", 3);
 }

void	rb(t_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

static void	reverse_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = first;
	while (last->next->next)
		last = last->next;
	last->next->next = first;
	*stack = last->next;
	last->next = NULL;
}

void	rra(t_node **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
