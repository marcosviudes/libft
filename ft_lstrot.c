/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:59:50 by mviudes           #+#    #+#             */
/*   Updated: 2021/08/07 15:59:51 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrot(t_list **list)
{
	t_list	*first;
	t_list	*last;

	if (*list == NULL || (*list)->next == NULL)
		return ;
	last = *list;
	first = *list;
	while (last->next != NULL)
		last = last->next;
	*list = first->next;
	first->next = NULL;
	last->next = first;
}

void	ft_lstdelfirst(t_list **list)
{
	t_list	*temp;

	if ((*list) != NULL)
	{
		if ((*list)->content)
		{
			temp = *list;
			*list = (*list)->next;
			free(temp);
		}
		else
			list = &((*list)->next);
	}
}
