/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:54:14 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/12 16:54:29 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	pos;
	int	count;

	pos = 0;
	count = 0;
	if (!tab || !f)
		return (0);
	while (tab[pos])
		count += f(tab[pos++]) == 1;
	return (count);
}
