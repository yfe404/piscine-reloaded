NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objs

SRC = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap

SRCS = $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(SRC)))
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
