/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 02:37:33 by sebasilve         #+#    #+#             */
/*   Updated: 2026/11/19 17:43:57 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
# define PUSH_SWAP

#include <climits>
typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
} t_node;