/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:47:27 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/12 16:47:27 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	pos;

	if (!tab || !f || length <= 0)
		return ;
	pos = 0;
	while (pos < length)
		f(tab[pos++]);
}
