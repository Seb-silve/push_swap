/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:54:08 by sebasilve         #+#    #+#             */
/*   Updated: 2026/11/18 16:23:27 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_error()
{
	write(2, "Error", 5);
	exit();
}


void	ft_parse(t_node **a, int	argc, char	*str)
{
	int	i;
	char	**numbers;

	i = 1;
	while (i < argc)
		numbers = ft_split(argv[i++], " ");
	i = 0;
	while (numbers[i++])
		ft_add(a, numbers[i]);
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