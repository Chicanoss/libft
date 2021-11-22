/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:33:58 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/19 14:56:13 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(const char	*str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char	*str, char const	*needle, size_t n);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size);
size_t	ft_strlcat(char	*dst, const	char	*src, size_t	size );
char	*ft_strchr(const char *str, int schar);
void	*ft_memcpy(void *dest, const void *src, size_t size);
int		ft_isprint(int n);
int		ft_isdigit(int n);
int		ft_isascii(int n);
int		ft_isalpha(int c);
int		ft_isalnum(int n);
void	ft_bzero(void	*str, size_t	n);
void	*ft_memset(void *pointer, int value, size_t count);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *pointer1, const void	*pointer2, size_t size);
int		ft_strncmp(const char	*first, const char	*second, size_t	size);
void	*ft_memmove(void	*dst, const void	*src, size_t	size);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t	count, size_t	size);
int		ft_atoi(const char	*str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char	*s, unsigned int start, size_t	len);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void	*));
void	ft_lstclear(t_list	**lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif