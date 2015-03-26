/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:03:42 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/26 16:36:40 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdarg.h>
# include <unistd.h>
# include <wchar.h>
# include <stdlib.h>


/*
**	ft_printf sources
*/

int		ft_printf(const char *format, ...);
int		ft_putstr_int(char *s);
int		ft_putchar_int(int c);
int		ft_putnbr_int(int n);
int		ft_putlstr_int(wchar_t *str);
int		ft_printaddr_int(void *addr);
int		ft_putllnbr_int(long long int n);
char	*convert_dec_to_base(long long int nbr, int base, short param);
int		ft_puthexa_int(long long int n, short param);
int		ft_putoctal_int(long long int n);
int		ft_putlchar_int(int c);
int		ft_putunsgnllint_int(unsigned long long int n);

/*
**	libft sources
*/

void	ft_putchar(char c);
void	ft_putstr(char const *str);
void	ft_putendl(char const *str);
int		ft_countnum(int n);
void	ft_strsupr(char *s, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_rgbtohexa(float r, float g, float b);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlen(char const *str);
size_t	ft_tablen(char **str);
void	ft_tabdel(char ***tab);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t n);
char	**ft_tabdup(char **tab);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t sizei);
void	ft_putnbr(int n);
void	ft_putdouble(double n, short size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isblank(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	*ft_memallocpp(size_t size, void (*f)(char *, int, char *));
void	ft_memdel(void **ap);
char	*ft_strjoinnfree(char *s1, char *s2);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strcrl(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_strequ(char const *s1, char const *s2);
void	ft_strclr(char *s);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnstr(char *str, int n);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl_fd(char const *str, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
double	ft_abs(double n);

#endif
