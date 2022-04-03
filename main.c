#include "./include/ft_printf.h"
#include <stdio.h>




int main(void)
{	


	printf("%c\n", '0');
	printf(" %c \n", '0');
	printf(" %c\n", '0' - 256);
	printf("%c \n", '0' + 256);
	printf(" %c %c %c \n", '0', '0', '1');
	printf(" %c %c %c \n", ' ', ' ', ' ');
	printf(" %c %c %c \n", '1', '2', '3');
	printf(" %c %c %c \n", '2', '1', '0');
	printf(" %c %c %c \n", '0', '1', '2');

	printf("\n\n\n");

	ft_printf("%c\n", '0');
	ft_printf(" %c \n", '0');
	ft_printf(" %c\n", '0' - 256);
	ft_printf("%c \n", '0' + 256);
	ft_printf(" %c %c %c \n", '0', '0', '1');
	ft_printf(" %c %c %c \n", ' ', ' ', ' ');
	ft_printf(" %c %c %c \n", '1', '2', '3');
	ft_printf(" %c %c %c \n", '2', '1', '0');
	ft_printf(" %c %c %c \n", '0', '1', '2');

	return (0);
}