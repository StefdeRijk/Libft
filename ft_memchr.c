#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		l;

	str = (const char *)s;
	l = 0;
	while (l < n)
	{
		if (str[l] == c)
			return ((void *)&str[l]);
		l++;
	}
	return (0);
}
