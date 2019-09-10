/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:54:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/27 16:08:10 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

static int ft_help_call()
{
	printf("Usage: ft_ls [OPTION]... [FILE]...\nList information about the FILEs");
	printf(" (the current directory by default).\nSort entries alphabetically");
	printf(" if none of -'t' is specified.\n");
	printf("\nMandatory arguments to long options are mandatory for short ");
	printf("options too.\n");
  	printf("-a, --all	do not ignore entries starting with .\n");
	printf("-l		use a long listing format\n");
	printf("-r, --reverse	reverse order while sorting\n");
	printf("-R, --recursive	list subdirectories recursively\n");
	printf("-t		sort by modification time, newest first\n");
	printf("	--help	display this help and exit\n\n");
	printf("Exit status:\n 0	if OK,\n");
 	printf(" 1	if minor problems (e.g., cannot access subdirectory),\n");
 	printf(" 2	if serious trouble (e.g., cannot access command-line argument).\n");
 	return (0);
}

static int	ft_ambiguous(char *str, int n)
{
	printf("ft_ls: option '--%c' is ambiguous;\n", str[n + 1]);
	printf("Try 'ft_ls --help' for more information.\n");
	return (0);
}

int	ft_flag_set(t_ls_flags *ft_ls, char *parse)
{
	int	i;

	i = 1;
	while (parse[i] != '\0')
	{
		if (parse[i] == 'l')
			ft_ls->flag_l = 1;
		else if (parse[i] == 'R')
			ft_ls->flag_recursive = 1;
		else if (parse[i] == 'a')
			ft_ls->flag_a = 1;
		else if (parse[i] == 'r')
			ft_ls->flag_r = 1;
		else if (parse[i] == 't')
			ft_ls->flag_t = 1;
		else if (ft_strcmp(parse + i, "-help") == 0)
			return (ft_help_call());
		else if (parse[i] == '-' && parse[i + 1] != '\0'
			&& (ft_strchr_bool(LS_FLAGS, parse[i + 1]) == 1))
			return (ft_ambiguous(parse, i));
		else
		{
			printf("ft_ls: illegal option -- %c\n", parse[i]);
			printf("usage: ft_ls [-%s] [file ...]\n", LS_FLAGS);
			return (0);
		}
		i++;
	}
	return (1);
}
