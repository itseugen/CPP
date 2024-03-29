# --------------------------------- MAKEFILE --------------------------------- #

# ---------------------------------------------------------------------------- #
#                                    Config                                    #
# ---------------------------------------------------------------------------- #

NAME			:= dreamjob
CPP				:= c++
CPPFLAGS		:= -Wall -Wextra -Werror -std=c++98

# ---------------------------------------------------------------------------- #
#                                     Files                                    #
# ---------------------------------------------------------------------------- #

OBJ_DIR			:= ./objs

SRC				:= tests.cpp Account.cpp

SRCS			:= $(SRC)

OBJS			:= $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

SUBFILES		:= tests.cpp Account.hpp

# ---------------------------------------------------------------------------- #
#                                     Rules                                    #
# ---------------------------------------------------------------------------- #

all: $(NAME)

$(NAME): $(SUBFILES) $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN)"Linking dreamjob"$(DEFAULT);

$(SUBFILES):
	curl -O https://cdn.intra.42.fr/document/document/22390/tests.cpp
	curl -O https://cdn.intra.42.fr/document/document/22388/Account.hpp
	curl -O https://cdn.intra.42.fr/document/document/22389/19920104_091532.log


$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) -c $< -o $@

debug: CPPFLAGS += -g
debug: re

nflag: CPPFLAGS = 
nflag: all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

compare: all
	./dreamjob > out.txt
	awk '{$$1=""; print }' out.txt > file1_mod.txt
	awk '{$$1=""; print }' 19920104_091532.log > file2_mod.txt
	diff file1_mod.txt file2_mod.txt || true
	rm -f file1_mod.txt file2_mod.txt


.PHONY: all clean fclean re

# Colours to make it look nice
DEFAULT	= "\033[39m"
GREEN	= "\033[32m"