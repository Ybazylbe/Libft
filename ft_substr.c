/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:20:01 by ybazylbe          #+#    #+#             */
/*   Updated: 2023/11/14 17:27:05 by ybazylbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	srclen;

	if (!s)
		return (NULL);
	srclen = ft_strlen(s);
	if (srclen > start)
		len = strnlen(&s[start], len);
	else
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
