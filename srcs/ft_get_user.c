#include "../includes/ft_ls.h"

char	*ft_get_user(struct stat fstat)
{
	char			*str;
	struct passwd	*pw;
	struct group	*gr;

	pw = getpwuid(fstat.st_uid);
	gr = getgrgid(fstat.st_gid);
	str = ft_strjoin(ft_strjoin(pw->pw_name, "  "), gr->gr_name);
	return (ft_strjoin(str, " "));
}

