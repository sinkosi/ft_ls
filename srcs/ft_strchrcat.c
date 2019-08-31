#include "../includes/ft_ls.h"

char	*ft_strchrcat(char *dst, const char src)
{
	size_t i;

	i = ft_strlen(dst);
	if (src != '\0')
		dst[i] = src;
	dst[i + 1] = '\0';
	return (dst);
}
