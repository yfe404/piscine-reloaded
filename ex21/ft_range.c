/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:29:01 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/12 16:29:01 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n_ints;
	int	*array;
	int	pos;

	pos = 0;
	if (min >= max)
		return (NULL);
	n_ints = max - min;
	array = malloc(n_ints * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (min < max)
		array[pos++] = min++;
	return (array);
}
