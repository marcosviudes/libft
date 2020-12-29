/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:44:06 by mviudes           #+#    #+#             */
/*   Updated: 2020/12/28 12:56:13 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*s1_;
	const char	*s2_;

	s1_ = s1;
	s2_ = s2;
	while (n--)
	{
		if (*s1_++ != *s2_++)
			return (*s1_ - *s2_);
		if (*s1_ == '\0')
			return (0);
	}
	return (0);
}
