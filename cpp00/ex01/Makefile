# -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- #
# /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ #
# /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ #
# /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ #
# /|\ -_UwU_- /|\ Makefile       /|\ -_UwU_- /|\ #
# -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- #

NAME = phone_book

F = Contact\
	PhoneBook\
	main

S = $(foreach f, $(F), $(f).cpp)

OBJ = $(S:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	c++ -o $(NAME) $(OBJ) $(CFLAGS)
	@printf "\x1b[32m$(NAME) compiled\x1b[0m\n"

.cpp.o:
	c++ -o $@ -c $< $(CFLAGS)
	@printf "\x1b[32m$< compiled\x1b[0m\n"

clean:
	@rm -rf $(OBJ)
	@printf "\x1b[31m$(OBJ) deleted\x1b[0m\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "\x1b[31m$(NAME) deleted\x1b[0m\n"

re: fclean all