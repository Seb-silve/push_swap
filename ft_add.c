/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:03:04 by sebasilve         #+#    #+#             */
/*   Updated: 2026/11/18 13:08:45 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>


void	ft_add(t_node	**a, char	*number)
{
	t_node	new;
	
	if (ft_isnumber(number))
	{
		new->value = ft_atoi()
	}
}

int	ft_isnumber(char	*number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
int	ft_atoi(const char *str)
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