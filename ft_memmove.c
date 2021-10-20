#include "libft.h"
static char	*ft_reverse(char *dst1, char *src1, int len);

void	*ft_memmove(void *dst, void *src, size_t len)
{
	int		i;
	char	*dst1;
	char	*src1;

	i = 0;
	dst1 = (void *)dst;
	src1 = (void *)src;
	if (!dst1 && !src1)
		return (0);
	if (dst1 < src1)
	{
		while (len > 0)
		{
			dst1[i] = src1[i];
			i++;
			len--;
		}
	}
	else
		ft_reverse(dst1, src1, len);
	return ((void *)dst1);
}

static char	*ft_reverse(char *dst1, char *src1, int len)
{
	int	i;

	i = len;
	while (i > 0)
	{
		i--;
		dst1[i] = src1[i];
	}
	return (dst1);
}
