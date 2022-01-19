CC=cc
CFLAGS=-Wall -Wextra -Werror -g

RM = rm -f
AR    := ar rcs

SRC_DIR = src
INCLUDE_DIR = include

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)
INCLUDES = $(wildcard $(INCLUDE_DIR)/*)
NAME = liblink.a
MAIN = main.c
EXEC = push_swap
OBJ_DIR = $(addprefix obj/, $(notdir $(OBJS)))

all: $(NAME) TEST
	
	

obj/%.o: src/%.c $(INCLUDES)
	 $(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o obj/$(notdir $@)


$(NAME): $(OBJ_DIR) $(INCLUDES)
	@ $(AR) library/$(NAME) $(OBJ_DIR)

TEST :
	@ $(CC) $(CFLAGS) $(MAIN)  -I $(INCLUDE_DIR) -o $(EXEC) library/$(NAME) 
	@ ./$(EXEC)


clean:
	$(RM) $(OBJ_DIR) push_swap

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re