/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:50:49 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 00:55:26 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "../Libft/libft.h"

typedef struct stack
{
	int	*stack_a;
	int	*stack_b;
	int	*temp;
	int	temp1;
	int	*temp_array_a;
	int	max;
	int	min;
	int	stack_a_size;
	int	stack_b_size;
	int	hamlesayisi;
}t_stack;

//Swap
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
//Push
void	pa(t_stack *stack);
void	pb(t_stack *stack);
//Rotate
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
//Reverse Rotate
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
//Find Number
void	find_max(t_stack *stack);
void	find_min(t_stack *stack);
//Find Biggest Lower Numbers 
int		find_lowest_number(t_stack *stack);
int		find_biggest_number(t_stack *stack);
void	buyuk_bulucu(t_stack *stack, int sayi, int index, int x);
void	lowest_first(t_stack *stack, int index);
int		find_low_number2(t_stack *stack, int x);
//first_lower && first bigger
void	first_lower(t_stack *stack);
void	first_biggest(t_stack *stack);
//Sorting Algorithm
int		check_sorted(t_stack *stack);
void	short_sort(t_stack *stack);
void	sorting_100(t_stack *stack);
void	print_stack(t_stack *stack);
void	selection_sort(int *temp_stack, int size);
void	short_argv_11_100(t_stack *stack, int x, int artis, int keynbr);
void	sort_argv_100_long(t_stack *stack, int x, int artis, int keynbr);

//Struct_init
void	struct_split(char **av, t_stack *stack);
void	struct_argv(int ac, char **av, t_stack *stack);
void	create_stack(t_stack *stack, int size);
int		check_argv(char **tmp, int x, int y);

//Struct Copy
void	stack_copy(t_stack *stack, int *temp_stack);
void	middle_sort_1(t_stack *stack, int *temp_stack, int keynbr);

//Atoiwitherror
int		ft_atoi_with_error(const char *str, long val, int sign);

#endif