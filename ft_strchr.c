/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:03:00 by ybazylbe          #+#    #+#             */
/*   Updated: 2023/11/13 14:48:45 by ybazylbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if (c == 0)
		return (ptr);
	return (NULL);
}
