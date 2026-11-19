/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:54:08 by sebasilve         #+#    #+#             */
/*   Updated: 2026/11/19 18:25:38 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_error()
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
	while (i > 0)
		free(tab[i--]);
	free(tab);
}

void	ft_free_stack(t_node *stack)
{
	t_node	*ptr;

	ptr = *a;
	a = a->next;
	while (a->next)
	{
		free(ptr);
		ptr = *a;
		a = a->next;
	}
}

void	ft_parse(t_node **a, int	argc, char	*str)
{
	int		i;
	int		j;
	char	**numbers;

	i = 1;
	while (i < argc)
	{
		numbers = ft_split(argv[i], " ");
		j = 0;
		while (numbers[j++])
		{
			if (!ft_add(a, numbers[j]))
			{
				ft_free_stack(a);
				ft_free_tab(numbers);
				ft_error();
			}
			j++;
		}
		i++;
	}
	i = 0;
	while ()
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