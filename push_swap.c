/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:54:08 by sebasilve         #+#    #+#             */
/*   Updated: 2026/11/20 18:17:53 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	while (i >= 0)
		free(tab[i--]);
	free(tab);
}

void	ft_free_stack(t_node *stack)
{
	t_node	*next;

	
	while (stack)
	{
		next = stack->next;
		free(stack);
		stack = next;
	}
}

static int	ft_add_tokens(t_node **a, char **numbers)
{
	int	ij

	i = 0;
	while (numbers[i])
	{
		if (!ft_add(a, numbers[j]))
			return (0);
		j++;
	}
	return (1);
}

void	ft_parse(t_node **a, int	argc, char	**argv)
{
	int		i;
	char	**numbers;

	i = 1;
	while (i < argc)
	{
		numbers = ft_split(argv[i], ' ');
		if (!numbers || !numbers[0] || !ft_add_tokens(a, numbers))
		{
			ft_free_stack(*a);
			if (numbers)
				ft_free_tab(numbers);
			ft_error();
		}
		ft_free_tab(numbers);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_node *a;
	t_node *b;

	a = null;
	b = null;
	if (argc < 2)
		return (0);
	ft_parse(a, argc, argv[i]);
	
}
0, 2, 4, "1 3 6", 8
3