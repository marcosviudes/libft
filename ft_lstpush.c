/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:59:31 by mviudes           #+#    #+#             */
/*   Updated: 2021/08/07 15:59:31 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstpush(t_list **dest, t_list **src)
{
	t_list	*temp;
	t_list	*temp_2;

	if (*src != NULL)
	{
		temp_2 = *src;
		temp = (*src)->next;
		(*src)->next = *dest;
		*src = temp;
		*dest = temp_2;
		return (1);
	}
	return (0);
}
