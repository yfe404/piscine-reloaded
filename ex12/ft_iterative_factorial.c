/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:56:38 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/11 21:01:37 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int	res;

	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (1);
	res = n;
	while (--n)
		res *= n;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	printf("Factorial %d = %d\n", n, ft_iterative_factorial(n));
	return (0);
}*/
