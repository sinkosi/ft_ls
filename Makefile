# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 10:05:49 by sinkosi           #+#    #+#              #
#    Updated: 2019/07/28 12:20:23 by sinkosi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################################
#	NAME			#
#################################
NAME	= libftprintf.a

#########################
#	COLOURS		#
#########################
NOC		= \033[0m
BOLD		= \033[1m
UNDERLINE	= \033[4m
#COLOUR LIST BELOW WITH BOLD ON
RED		= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
MAGENTA		= \033[1,35m
CYAN		= \033[1;36m
WHITE		= \033[1;0m

OUTPUT	= 	@echo	"$(GREEN)$(NAME) has been created."\
			"$(BLUE)\nThis library is the intellectual property of"\
			"$(CYAN)\nSIBONELO NKOSI (SINKOSI) & WETHINKCODE_ (NPC)$(WHITE)"\

#########################
#	PATHS		#
#########################
LIBFT_A		= libft.a

INC_PATH	= includes/
SRCS_PATH	= srcs
OBJ_PATH	= obj/
LIBFT_PATH	= ./libft/

#############################################
#	COMPILER
######################################
CC		= gcc
CC1		= clang
FLAGS		= -Wall -Werror -Wextra

#########################
#	HEADERS		#
#########################

FTPRINTF_H	= -I ./includes/
LIBFT_H		= -I ./$(LIBFT_PATH)/includes/

#################################
#	FILES			#
#################################
SRCS_NAME	= ft_convert.c		\
		  ft_error.c			\
		  ft_flag_check.c		\
		  ft_flag_hash.c		\
		  ft_flag_plus.c		\
		  ft_flag_precision.c	\
		  ft_flag_reset.c		\
		  ft_flag_space.c		\
		  ft_flag_set.c			\
		  ft_flag_size.c		\
		  ft_flag_width.c		\
		  ft_handler_c_char.c	\
		  ft_handler_d_int.c	\
		  ft_handler_o_octal.c	\
		  ft_handler_p_pointer.c\
		  ft_handler_s_str.c	\
		  ft_handler_u_unsigned_int.c	\
		  ft_handler_x_hexadecimal.c	\
		  ft_handler_xc_hexadecimal.c	\
		  ft_handler_convert.c			\
		  ft_print_c_char.c		\
		  ft_print_d_int.c		\
		  ft_printf.c			\
		  ft_print_mod.c		\
		  ft_print_o_octal.c	\
		  ft_print_out.c		\
		  ft_print_p_pointer.c	\
		  ft_print_s_str.c		\
		  ft_print_u_unsigned_int.c	\
		  ft_print_x_hexadecimal.c	\
		  ft_print_xc_hexadecimal.c	

OBJ		= $(addprefix $(OBJ_PATH)/, $(SRCS_NAME:%.c=%.o))
################################################
#	LIBRARIES
###############################################

LIBFT		= $(LIBFT_PATH) -lft

##############################################
#	MAKE RULES
############################################

all:	$(NAME)

$(NAME):	$(OBJ)
		@make all -C $(LIBFT_PATH)/
		@#cp $(LIBFT_PATH) $(LIBFT_A) .
		@#mv $(LIBFT_A) $(NAME)
		@ar rc $(NAME) $(OBJ) $(LIBFT_PATH)/obj/*.o
		@ranlib $(NAME)
		$(OUTPUT)

$(OBJ_PATH)/%.o: $(SRCS_PATH)/%.c
	@mkdir	-p $(OBJ_PATH)
	@$(CC1) -I $(INC_PATH) -o $@ -c $<

clean	:
	@make -C $(LIBFT_PATH)/ clean
	@/bin/rm -rf $(OBJ_PATH)

fclean	: clean
	@make -C $(LIBFT_PATH)/ fclean
	@/bin/rm -rf $(NAME)

re:	fclean all

.PHONY:	all, clean, fclean, re
