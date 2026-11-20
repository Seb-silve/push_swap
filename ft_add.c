/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:03:04 by sebasilve         #+#    #+#             */
/*   Updated: 2026/11/20 18:44:07 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static int	ft_has_value(t_node **a, int value)
{
	while (*a)
	{
		if ((*a)->value == value)
			return (1);
		*a = (*a)->next;
	}
	return (0);
}

int	ft_add(t_node **a, char *number)
{
	t_node	*new;
	t_node	*last;
	long	value;

	if (!ft_isnumber(number))
		return (0);
	value = ft_atol(number);
	if (value < INT_MIN || value > INT_MAX || ft_has_value(a, value))
		return (0);
	new = malloc(sizeof(t_node));
	if (!new)
		return (0);
	new->value = value;
	new->next = NULL;
	if (!*a)
		*a = new;
	else
	{
		last = *a;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (1);
}

int	ft_isnumber(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '+' || number[i] == '-')
		i++;
	if (!number[i])
		return (0);
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

long	ft_atoi(const char *str)
{
	long	value;
	int		sign;

	sign = 1;
	value = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return ((int)(value * sign));
}