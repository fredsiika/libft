/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:56:55 by fredsiik          #+#    #+#             */
/*   Updated: 2019/02/11 22:46:14 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H

#define ft_LIBFT_H
#define BUFF_SIZE 4096
#define BUFF_SIZE_IN 1
#define FDS 65535
#define NFLAGS 5
#define NLENS 6

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <wchar.h>
#include <stdarg.h>

typedef struct	s_list
{
	void	*content;
	size_t	content_size;
}		t_list;

typedef struct	s_info
{
	int	flags[NFLAGS];
	int	width;
	int	lens[NLENS];
	int	preci;
	char **str;
	int	count;
	char *res;
	wchar_t *wres;
}		t_info;

enum	e_flags
{
	Fminus,
	Fplus,
	Fspace,
	Fhash,
	Fzero
};

enum	e_lengths
{
	Lhh,
	Lh,
	Ll,
	Lll,
	Lj,
	Lz
};

void			ft_putchar(char c);
size_t			ft_strlen(char *str);
int			ft_strcmp(char *str1, char *str2);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_atoi(const char *str);
char			*ft_strcpy(char *dst, const char *src);
char			ft_strdup(const char *s1);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strstr(const char *hs, const char *ned);
char			*ft_strnstr(const char *hs, const char *ned, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			*ft_memalloc(size_t size);

#endif
