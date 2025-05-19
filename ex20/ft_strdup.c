/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:16:43 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/12 16:16:45 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s && s[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	size_t	i;
	char	*new;

	i = 0;
	len = ft_strlen(src);
	new = malloc(len + 1);
	if (new == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (i < len + 1)
	{
		new[i] = src[i];
		i++;
	}
	return (new);
}
