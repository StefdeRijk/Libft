#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		l;

	l = ft_strlen((char *)s1) + 1;
	ptr = malloc(sizeof(char) * l);
	if (ptr == 0)
		return (0);
	ft_memcpy(ptr, (char *)s1, l);
	return (ptr);
}