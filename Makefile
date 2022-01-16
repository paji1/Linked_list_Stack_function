CC=cc
CFLAGS=-Wall -Wextra -Werror -g

RM = rm -f

SRC_DIR=src
INCLUDE_DIR=include

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)
INCLUDES = $(wildcard $(INCLUDE_DIR)/*)
NAME = push_swap
MAIN = main.c

B ?= 12 1 2 2

all: $(NAME)

%.o: %.c $(INCLUDES)
	@ $(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o obj/$(notdir $@)

$(NAME): $(OBJS) $(INCLUDES)
	@ $(CC) $(CFLAGS) $(MAIN) $(addprefix obj/, $(notdir $(OBJS))) -I $(INCLUDE_DIR) -o $(NAME)
	@ ./$(NAME)


clean:
	$(RM) $(addprefix obj/, $(notdir $(OBJS)))

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re