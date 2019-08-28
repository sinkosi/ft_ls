#include "../includes/ft_ls.h"

void	ft_ls_p_long_list(t_dir *list)
{
	t_dir		*temp;
	struct stat	fstat;
	char		*bytes;
	int			len;
	int			i;

	temp = list;
	while (temp != NULL)
	{
		lstat(temp->path, &fstat);
		ft_ls_p_permission(temp, fstat);
		ft_putnbr(fstat.st_nlink);
		ft_putstr(" ");
		ft_putstr(ft_get_user(fstat));
		i = 5;
		bytes = ft_itoa(fstat.st_size);
		len = ft_strlen(bytes);
		while (i-- > len)
			ft_putchar(' ');
		ft_putstr(ft_strjoin(bytes, "  "));
		ft_get_time(fstat, temp);
		temp = temp->next;
		if (temp != NULL)
			ft_putchar('\n');
	}
}