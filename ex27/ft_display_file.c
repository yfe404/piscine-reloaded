/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfeunteu <yfeunteu@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:35:11 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/04/12 17:36:36 by yfeunteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_perror(char	*msg)
{
	while (*msg)
		write(STDERR_FILENO, msg++, 1);
}

void	process_file(int fd)
{
	ssize_t	bytes_read;
	size_t	buff_size;
	char	buff[42];

	buff_size = 42;
	bytes_read = read(fd, buff, buff_size);
	while (bytes_read)
	{
		if (bytes_read < 0)
		{
			ft_perror("Cannot read file.\n");
			close(fd);
			return ;
		}
		write(STDOUT_FILENO, buff, bytes_read);
		bytes_read = read(fd, buff, buff_size);
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
	{
		ft_perror("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_perror("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_perror("Cannot read file.\n");
		return (1);
	}
	process_file(fd);
	close(fd);
	return (0);
}
