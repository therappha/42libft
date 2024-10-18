#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(char *str, char c);
char	*ft_strrchr(char *str, char c);
int	ft_strncmp(char *s1, char *s2, int n);
void	*ft_memset(void *s, int c, size_t n);

#endif

