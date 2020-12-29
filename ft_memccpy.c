/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:41:23 by mviudes           #+#    #+#             */
/*   Updated: 2020/12/28 13:42:03 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dst_;
	char	*src_;

	src_ = (char *)src;
	dst_ = dest;
	while (n--)
	{
		*dst_++ = *src_;
		if (*src_ == c)
			return (dst_);
		src_++;
	}
	return (0);
}
