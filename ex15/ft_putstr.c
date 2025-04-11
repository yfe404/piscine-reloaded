/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:35:21 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/11 21:36:35 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (str && *str)
		ft_putchar(*str++);
}

/*int	main(void)
{
	ft_putstr("Hello World!\n");
	return (0);
}*/
