/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:38:38 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/06 20:40:38 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BYTE 28000
#define EACCES_MSG ": Permission denied\n"
#define ENOENT_MSG ": No such file or directory\n"
#define EISDIR_MSG ": Is a directory\n"
#define EBADF_MSG ": Bad file number\n"
#define EAGAIN_MSG ": Resource temporarily unavailable\n"
#define EINTR_MSG ": Interrupted function call\n"
#define EIO_MSG ": Input/output error\n"
#define EINVAL_MSG ": Invalid argument\n"

unsigned	len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_err(char *fi)
{
	write(2, "cat: ", 5);
	write(2, fi, len(fi));
	if (errno == EACCES)
		write(2, EACCES_MSG, len(EACCES_MSG));
	else if (errno == ENOENT)
		write(2, ENOENT_MSG, len(ENOENT_MSG));
	else if (errno == EISDIR)
		write(2, EISDIR_MSG, len(EISDIR_MSG));
	else if (errno == EBADF)
		write(2, EBADF_MSG, len(EBADF_MSG));
	else if (errno == EAGAIN)
		write(2, EAGAIN_MSG, len(EAGAIN_MSG));
	else if (errno == EINTR)
		write(2, EINTR_MSG, len(EINTR_MSG));
	else if (errno == EIO)
		write(2, EIO_MSG, len(EIO_MSG));
	else if (errno == EINVAL)
		write(2, EINVAL_MSG, len(EINVAL_MSG));
	else
		write(2, ": Unknown error\n", len(": Unknown error\n"));
}

int			ft_cat(int str)
{
	char	b[BYTE];
	int		size;

	if (str == -1)
		return (str);
	while ((size = read(str, b, BYTE)) != 0 && size != -1)
		if (write(1, b, size) == -1)
			return (1);
	if (size == -1)
		return (1);
	if (str != 0)
		close(str);
	return (0);
}

int			main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
		return (ft_cat(0));
	i = 1;
	while (i < argc)
	{
		if (ft_cat(open(argv[i], O_RDONLY)) != 0)
			ft_err(argv[i]);
		i++;
	}
	return (0);
}
