/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:12:43 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/06 20:51:05 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BYTE 4096

void	ft_putstr(char *str, int st)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (st == 1)
			write(1, &str[i], 1);
		else
			write(2, &str[i], 1);
		i++;
	}
	if (st == 1)
		write(1, "\n", 1);
	else
		write(2, "\n", 1);
}

int		main(int argc, char **argv)
{
	char	fi[BYTE + 1];
	int		st;
	int		z;

	if (argc == 1 || argc > 2)
	{
		if (argc == 1)
			ft_putstr("File name missing.", 2);
		if (argc > 2)
			ft_putstr("Too many arguments.", 2);
		return (1);
	}
	st = open(argv[1], O_RDONLY);
	z = read(st, fi, BYTE);
	while (z > 0)
	{
		ft_putstr(fi, 1);
		z = read(st, fi, BYTE);
	}
	close(st);
	return (0);
}
