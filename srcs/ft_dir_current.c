#include "../includes/ft_ls.h"

void    ft_dir_current(int argc, char **argv, struct dirent *attr)
{
	DIR		*directory;
	char	*path;
	char	*str;

	
	while ((attr = readdir(path)) != NULL)
	{
		printf("%s\t", attr->d_name);
	}
	//return ;
}