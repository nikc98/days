#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 15:04:53 by vjory-ca          #+#    #+#              #
#    Updated: 2018/09/06 16:35:03 by vjory-ca         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLG = -Wall -Wextra -Werror
NAME = ft_display_file

all:
	@gcc $(FLG) -c *.c
	@gcc *.o  -o $(NAME)
clean:
	@rm -f *.o

fclean: clean
	@rm -f a.out

re: fclean all