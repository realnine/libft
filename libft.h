#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *dst, int val, size_t len);
void	*ft_memcpy(void *dst, void *src, size_t len);
void	*ft_memchr(void *src, int c, size_t len);
void	*ft_memccpy(void *dst, void *src, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
