NAME = megaphone

F = megaphone.cpp

OBJ = $(F:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
r: re
	./$(NAME)
	
$(NAME): $(OBJ)
	@c++ -o megaphone $(OBJ) $(CFLAGS)
	@printf "\x1b[32mcompiled\x1b[0m\n"

.cpp.o:
	@gcc -o $@ -c $< $(CFLAGS)
	@printf "\x1b[32m$< compiled\x1b[0m\n"

clean:
	@rm -rf $(OBJ)
	@printf "\x1b[31m$(OBJ) deleted\x1b[0m\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "\x1b[31m$(NAME) deleted\x1b[0m\n"

re: fclean all