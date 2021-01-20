#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

void	*ft_memset(void *dst, int val, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memchr(void *src, int c, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *dst, const void *src, size_t len);
void	ft_bzero(void *str, size_t len);
size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int 	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int		ft_isprint(int c);
int 	ft_toupper(int c);
int 	ft_tolower(int c);
char 	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
char	*ft_strnstr(const char *src, const char *partStr, size_t rangeSrc);
int		ft_atoi(const char *str);
void 	*ft_calloc(size_t ctn, size_t siz);
char	*ft_strdup(const char *s1);


#endif
