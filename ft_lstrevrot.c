/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrevrot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:36:01 by mviudes           #+#    #+#             */
/*   Updated: 2021/08/07 12:36:43 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstrevrot(t_list **list)
{
	t_list	*last;
	t_list	*temp;

	last = NULL;
	temp = NULL;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return (0);
	last = *list;
	temp = last->next;
	while (temp->next)
	{
		last = last->next;
		temp = temp->next;
	}
	last->next = NULL;
	temp->next = *list;
	*list = temp;
	return (1);
}
