##
## Makefile for makefile in /home/kania_r/rendu/PSU_2015_my_printf
## 
## Made by Romain Kania
## Login   <kania_r@epitech.net>
## 
## Started on  Mon Nov  2 15:37:04 2015 Romain Kania
## Last update Sun Jan 24 17:06:03 2016 Romain KANIA
##

SRC     = lib/my/my_find_prime_sup.c \
	  lib/my/my_putshort.c \
          lib/my/my_putlong.c \
	  lib/my/my_intlen.c \
	  lib/my/my_putrevstr.c \
	  lib/my/my_putlong.c \
	  lib/my/my_getnbr.c \
          lib/my/my_isneg.c \
	  lib/my/my_isneg.c \
          lib/my/my_is_prime.c \
          lib/my/my_power_rec.c \
          lib/my/my_putchar.c \
          lib/my/my_put_nbr.c \
          lib/my/my_putstr.c \
          lib/my/my_revstr.c \
          lib/my/my_showstr.c \
          lib/my/my_show_wordtab.c \
          lib/my/my_sort_int_tab.c \
          lib/my/my_square_root.c \
          lib/my/my_strcapitalize.c \
          lib/my/my_strcat.c \
          lib/my/my_strcmp.c \
          lib/my/my_strcpy.c \
          lib/my/my_str_isalpha.c \
          lib/my/my_str_islower.c \
          lib/my/my_str_isnum.c \
          lib/my/my_str_isprintable.c \
          lib/my/my_str_isupper.c \
          lib/my/my_strlen.c \
          lib/my/my_strlowcase.c \
          lib/my/my_strncat.c \
          lib/my/my_strncmp.c \
          lib/my/my_strncpy.c \
          lib/my/my_strstr.c \
          lib/my/my_strupcase.c \
          lib/my/my_printf.c \
	  lib/my/my_printf2.c \
	  lib/my/my_printf3.c \
	  lib/my/my_printp.c \
	  lib/my/my_swap.c \
	  lib/my/my_printx.c \
	  lib/my/my_printpercent.c \

NAME	= mysh

OBJS	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rc libmy.a $(OBJS)
	ranlib libmy.a
	cp libmy.a lib/
	cp libmy.a lib/my
	cp lib/my/my.h include/
	cc -o $(NAME) $(NAME).c my_str_to_word_tab.c epur_str.c mysh2.c mysh3.c libmy.a -ggdb3

clean:
	rm -f $(OBJS)

fclean:	clean


re: fclean all
