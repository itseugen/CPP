# --------------------------------- MAKEFILE --------------------------------- #

# ---------------------------------------------------------------------------- #
#                                    Config                                    #
# ---------------------------------------------------------------------------- #

NAME			:= RPN
CPP				:= c++
CPPFLAGS		:= -Wall -Wextra -Werror -std=c++98

# ---------------------------------------------------------------------------- #
#                                     Files                                    #
# ---------------------------------------------------------------------------- #

OBJ_DIR			:= ./objs

SRC				:= main.cpp RPN.cpp

SRCS			:= $(SRC)

OBJS			:= $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

# ---------------------------------------------------------------------------- #
#                                     Rules                                    #
# ---------------------------------------------------------------------------- #

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN)"Linking $(NAME)!"$(DEFAULT);

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) -c $< -o $@

test: all
	@echo "Testing errors:"
	./RPN "(2 + 2)"
	./RPN "2 2 + +"
	./RPN "-"
	./RPN "Hello World"
	./RPN "2 2 + - 2"
	@echo
	@echo
	@echo "Testing:"
	@echo "Expected: 42, Result:"
	@./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	@echo "Expected: 42, Result:"
	@./RPN "7 7 * 7 -"
	@echo "Expected: 0, Result:"
	@./RPN "1 2 * 2 / 2 * 2 4 - +"
	@echo "Expected: 14, Result:"
	@./RPN "5 1 2 + 4 * + 3 -"

debug: CPPFLAGS += -g
debug: re

nflag: CPPFLAGS = 
nflag: all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# Colours to make it look nice
DEFAULT	= "\033[39m"
GREEN	= "\033[32m"