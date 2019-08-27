/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:33:39 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/27 16:03:13 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include "../libft/includes/libft.h"

# include <dirent.h>
# include <sys/stat.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/acl.h>
# include <sys/xattr.h>
# include <pwd.h>
# include <grp.h>
# include <uuid/uuid.h>
# include <errno.h>
# include <time.h>

# define LS_FLAGS "Ralrt"
# define LONG 1
# define ALL 2
# define RECUR 4
# define REVE 8
# define TIM 16
# define DOT 32
# define NOSOR 64
# define PUT 128
# define COLO 256
# define NORM 512
# define UGNOM 1024
# define ONE 2048
# define ERROR 4096

/*
**	Flags:
**	-A - Shows all files (including hidden files), but doesn't show the "."
**		and ".." directories. (Bonus)
**	-G - Shows normal files, but adds colour. (Bonus) **
**	-R - Shows all files recursively.
**	-a - Shows all files including "." and "..".
**	-f - Shows normal files, unsorted. (Bonus)	**
**	-l - Shows files in long format.
**	-n - Shows UID and GID in long format as a number. (Bonus) **
**	-p - Adds a '/' to the back of directory names. (Bonus)	**
**	-r - Reverses the output.
**	-t - Sorts files according to time.
*/

typedef struct		s_ls_flags
{
	int				flag_recursive;
	int				flag_a;
	int				flag_l;
	int				flag_r;
	int				flag_t;
	char			*path;
	DIR				*dir_path;
	struct dirent	*dirent_dir;
	struct stat		ft_ls_stat;
}					t_ls_flags;

typedef struct		s_dir
{
	char			*dir;
	char			*path;
	time_t			*ft_time;
	int				*ft_is_dir;
	struct s_dir	*next;
}					t_dir;

/*
** FT_FLAG_INIT - This function takes the struct ft_ls as arguments and
**		initialises all its members	to zero.
*/
void				ft_flag_init(t_ls_flags *ft_ls);

/*
** FT_FLAG_SET - This function takes the struct ft_ls and a char as argument.
**		It then compares the char to see if it is valid input. It then turns
**		the appropriate flag on. Turning a flag on, would be to change the
**		value from 0 to 1. If an invalid char is provided then it will output
**		that an error has occured and the flag parsed is invalid.
*/
void				ft_flag_set(t_ls_flags *ft_ls, char c);

/*
** FT_D
*/
void				ft_dir_current(int argc, char **argv, struct dirent *attr);

/*
** ************************************************************************	*
**									LS_PRINTERS								*
** ************************************************************************	*
*/

void				ft_ls_p_permission(t_ls_flags *ft_ls,
		struct stat ft_ls_stat);
void				ft_ls_p_groupname(char *str);

#endif
