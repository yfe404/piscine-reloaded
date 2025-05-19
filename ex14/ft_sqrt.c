/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:26:00 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/05/19 17:34:28 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	test;

	if (nb <= 0)
		return (0);
	test = 1;
	while (test <= nb)
	{
		if (test * test <= 0)
			return 0;
		if (test * test == nb)
			return (test);
		test++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	
    int test_values[] =     {0, 1, 2, 4, 9, 10, 16, 25, 26, 100, 2147395600, -1, 84777569};
    int expected_results[] = {0, 1, 0, 2, 3, 0, 4, 5, 0, 10, 46340, 0, 0};
    int size = sizeof(test_values) / sizeof(test_values[0]);
    
    for (int i = 0; i < size; i++)
    {
        int input = test_values[i];
        int expected = expected_results[i];
        int result = ft_sqrt(input);
        if (result == expected)
            printf("PASS: ft_sqrt(%d) = %d ✅\n", input, result);
        else
            printf("FAIL: ft_sqrt(%d) = %d ❌ (expected %d)\n", 
			input, result, expected);
    }

    return 0;
}
