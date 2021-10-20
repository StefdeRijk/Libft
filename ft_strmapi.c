#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	if (s == 0)
		return (0);
	i = 0;
	str = ft_strdup(s);
	if (str == 0)
		return (0);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
