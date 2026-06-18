NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC = ft_printf.c \
      ft_printchar.c \
      ft_printnbr.c \
      ft_printfpointer.c \
	  ft_putchar.c

OBJ = $(SRC:.c=.o)
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re



# NAME = printf

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# RM = rm -f

# SRC = ft_printf.c \
#       ft_printchar.c \
#       ft_printnbr.c \
#       ft_printfpointer.c \
#       main.c

# OBJ = $(SRC:.c=.o)

# HEADER = ft_printf.h

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# %.o: %.c $(HEADER)
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	$(RM) $(OBJ)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
