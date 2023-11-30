/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 10:52:07 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 13:54:59 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// ----- CONVERSIONS ----- 
//string to integer
int				ft_atoi(const char *str);
//integer to string
char			*ft_itoa(int n);
//lowercase to uppercase
int				ft_toupper(int c);
//uppercase to lowercase
int				ft_tolower(int c);

// ----- CHARACTER CLASSIFICATION ----- 
//checks if the passed character falls into certain character class
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

// ----- MEMORY MANAGMENT -----
//allocates memory for an array and sets memory to zero
void			*ft_calloc(size_t nmeb, size_t size);
//erases the data in the n bytes of the memory starting at the location
void			ft_bzero(void *s, size_t n);
//sets the first bytes of the memory area the specified value
void			*ft_memset(void *s, int c, size_t n);
//copies n bytes from memory area src to memory area dest
void			*ft_memcpy(void *dest, const void *src, size_t n);
//same as memcpy but the memory areas may overlap
void			*ft_memmove(void *dest, const void *src, size_t n);
//checks for byte c in the first n bytes of the memory area pointed to by s
void			*ft_memchr(const void *s, int c, size_t n);
//compares the first n bytes of the memory areas s1 and s2
int				ft_memcmp(const void *s1, const void *s2, size_t n);

// ----- STRING MANAGMENT -----
// ... CALCULATE, COMPARE, LOCATE ...
//calculate the length of a string
size_t			ft_strlen(const char *str);
//compares two strings up to n characters
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
//locates the first occurrence of a char in a string
char			*ft_strchr(const char *s, int c);
//locates the last occurrence of a char in a string
char			*ft_strrchr(const char *s, int c);
//locates substring
char			*ft_strnstr(const char *s1, const char *s2, unsigned int n);

// ----- STRING MANIPULATION -----
// ... COPY, CONCATENATE ... 
//duplicates the string 
char			*ft_strdup(const char *s);
//join two strings
char			*ft_strjoin(const char *s1, const char *s2);
//size-bounded string copy
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
//size-bounded string concatenation
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);

// ----- STRING MANIPULATION -----
// ... SPLIT, TRIM, SUBSTRING ...
//splits a string into an array of strings using a delimiter
char			**ft_split(char const *s, char c);
//trim the start and the end of a string with the characters specified in set
char			*ft_strtrim(char const *s1, char const *set);
//creates a substring from a string
char			*ft_substr(char const *s, unsigned int start, size_t len);

// ----- STRING MANIPULATION: MODIFY -----
//applies a function to each character of a string passed as argument
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
//creates a new string, applying the function to each character of the string 
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// ----- WRITE TO FILE DESCRIPTOR -----
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

// ----- LINKED LISTS -----
//creates a new element with the content passed as argument
t_list			*ft_lstnew(void *content);
//adds the element new at the beginning of the list
void			ft_lstadd_front(t_list **lst, t_list *new);
//adds the element new at the end of the list
void			ft_lstadd_back(t_list **lst, t_list *new);
//returns the number of elements in the list
int				ft_lstsize(t_list *lst);
//returns the last element of the list
t_list			*ft_lstlast(t_list *lst);
//takes as a parameter an element and frees the memory of the element's content
void			ft_lstdelone(t_list *lst, void (*del)(void *));
//deletes and frees the given element and every successor of that element
void			ft_lstclear(t_list **lst, void (*del)(void *));
//iterates the list and applies the function to the content of each element
void			ft_lstiter(t_list *lst, void (*f)(void *));
//iterates the list and applies the function to the content of each element
//creates a new list resulting of the successive applications of the function
t_list			*ft_lstmap(t_list *lst,
					void *(*f)(void *), void (*del)(void *));

#endif
