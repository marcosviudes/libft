/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 14:42:41 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/09 13:47:19 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(content))))
		return (NULL);
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}
