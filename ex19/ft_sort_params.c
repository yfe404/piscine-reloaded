/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:08:06 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/12 16:08:07 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (str && *str)
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	bubble_sort(char **strings, int n)
{
	char	*ptr;	
	int		i;
	int		j;

	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_strcmp(strings[i], strings[j]) > 0)
			{
				ptr = strings [i];
				strings [i] = strings [j];
				strings [j] = ptr;
				i = 0;
				j = i + 1;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc < 2)
		return (0);
	bubble_sort(&argv[1], argc - 1);
	while (n < argc)
	{
		ft_putstr(argv[n++]);
		ft_putchar('\n');
	}
	return (0);
}
