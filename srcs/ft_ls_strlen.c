#include "../includes/ft_ls.h"

size_t  ft_ls_strlen(t_dir *list)//, struct stat ft_stat)
{
    t_dir   *temp;
    struct stat ft_stat;
    char    *str;
    size_t  len;

    temp = list;
    len = 0;
    while (temp != NULL)
    {
        lstat(temp->path, &ft_stat);
        str = ft_itoa(ft_stat.st_size);
        if (ft_strlen(str) > len)
            len = ft_strlen(str);
        temp = temp->next;
    }
    return (len);
}