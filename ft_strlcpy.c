/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:29:56 by ybazylbe          #+#    #+#             */
/*   Updated: 2023/10/30 12:38:01 by ybazylbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
//     char source[] = "lupi pupi drupi";
//     char destination[20];
//     size_t result;

//     result = ft_strlcpy(destination, source, 10);

//     printf("destination is: %s\n", destination);

//     return 0;
// }
