/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:50:26 by ybazylbe          #+#    #+#             */
/*   Updated: 2023/11/13 17:41:35 by ybazylbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	total_size = num * size;
	if (num == total_size / size)
	{
		ptr = malloc(total_size);
		if (ptr != NULL)
			ft_bzero(ptr, total_size);
	}
	else
	{
		ptr = NULL;
	}
	return (ptr);
}
