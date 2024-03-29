/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:59:09 by mviudes           #+#    #+#             */
/*   Updated: 2021/08/07 15:59:09 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnum(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '-' && i == 0)
			i++;
		if (!ft_isdigit(string[i]))
			return (0);
		i++;
	}
	return (1);
}
