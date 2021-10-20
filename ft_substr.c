#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	l;
	unsigned int	i;

	if (s == 0)
		return (0);
	l = ft_strlen(s);
	i = 0;
	if (l <= start)
		return (ft_strdup("\0"));
	str = malloc(len + 1);
	if (str == 0)
		return (0);
	ft_memcpy(str, &s[start], len);
	str[len] = '\0';
	return (str);
}
