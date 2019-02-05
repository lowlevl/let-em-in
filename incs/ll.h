/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:32:09 by glodi             #+#    #+#             */
/*   Updated: 2019/02/06 00:44:23 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LL_H
# define LL_H

# include <libft.h>

/*
** TODO: Reference
*/
/*typedef union	u_data {
	double		d;
	long double	ld;
	char		c;
	short		s;
	int			i;
	long		l;
	long long	ll;
	void*		p;
}				t_data;
*/
/*
** Circular doubly linked list implementation:
** * It can lead to infinite loops.
** * Function which take a double pointer to head can modify it.
*/
typedef struct	s_node {
	void			*data;
	struct s_node	*prev;
	struct s_node	*next;
}				t_node;

void			ll_add(t_node **head, void *data);
void			ll_addint(t_node **head, int i);
t_node			*ll_dup(t_node *head);
size_t			ll_len(t_node *head);
t_node			*ll_get(t_node *head, int id);
void			*ll_pop(t_node **head, int id);

#endif