#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char *tem_dest = dest;
	unsigned int i;
	i = 0;
	while(i++ < len)
	{
		*tem_dest++ = val;
	}
	return(dest);
}
