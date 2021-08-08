/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:34:37 by mviudes           #+#    #+#             */
/*   Updated: 2021/08/07 12:34:38 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstpop(t_list **list)
{
	t_list	*head;
	void	*ret;

	if (*list == NULL)
		return (NULL);
	head = *list;
	ret = head->content;
	(*list) = (*list)->next;
	free(head);
	return (ret);
}
