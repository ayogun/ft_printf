/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayogun <ayogun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:27:24 by ayogun            #+#    #+#             */
/*   Updated: 2022/04/03 18:46:17 by ayogun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// typedef struct s_arg
// {
// 	va_list	args;
// }	t_arg;

int		ft_printf(const char *format, ...);
int		ft_formats(va_list *args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent(void);

void	ft_putstr(char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);

#endif
