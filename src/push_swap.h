/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <jpicron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:40:52 by jpicron           #+#    #+#             */
/*   Updated: 2022/11/18 13:06:56 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

int			is_sorted(t_list **stack);
void		ft_free(char **str);
void		free_stack(t_list **stack);
void		simple_sort(t_list **stack_a, t_list **stack_b);
void		radix_sort(t_list **stack_a, t_list **stack_b);
void		ft_check_args(int argc, char **argv);
t_list		*ft_lstnew(int value);
void		ft_lstadd_front(t_list **stack, t_list *new);
t_list		*ft_lstlast(t_list *head);
void		ft_lstadd_back(t_list **stack, t_list *new);
int			ft_lstsize(t_list *head);
void		index_stack(t_list **stack);
long		ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
int			swap(t_list **stack);
int			sa(t_list **stack_a);
int			sb(t_list **stack_b);
int			ss(t_list **stack_a, t_list **stack_b);
int			rotate(t_list **stack);
int			ra(t_list **stack_a);
int			rb(t_list **stack_b);
int			rr(t_list **stack_a, t_list **stack_b);
int			reverserotate(t_list **stack);
int			rra(t_list **stack_a);
int			rrb(t_list **stack_b);
int			rrr(t_list **stack_a, t_list **stack_b);
int			push(t_list **stack_to, t_list **stack_from);
int			pa(t_list **stack_a, t_list **stack_b);
int			pb(t_list **stack_a, t_list **stack_b);
int			get_min(t_list **stack, int val);
int			get_distance(t_list **stack, int index);
void		ft_putendl_fd(char *str, int fd);
void		ft_error(char *msg);
int			ft_isdigit(int c);

#endif