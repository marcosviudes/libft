/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:44:28 by mviudes           #+#    #+#             */
/*   Updated: 2020/12/28 14:56:19 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		len;

	ret = (char*)s;
	len = ft_strlen(s);
	if(c == '\0')
		return(ret + len);
	while(len--)
		if(*(ret+len) == c)
			return(ret + len);
	return (0);
}
