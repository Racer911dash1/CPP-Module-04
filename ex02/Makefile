# Program name
NAME := abstract_class

# Compiler and Flags
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++20
CXXFLAGS += -MMD -MP
CPPFLAGS := -I include

# Directories
SRCDIR := src/
OBJDIR := obj/

# Source files
SRCS := AAnimal.cpp \
		Brain.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \

# Objects and Dependencies
SRCPATH := $(addprefix $(SRCDIR),$(SRCS))
OBJS := $(patsubst $(SRCDIR)%,$(OBJDIR)%,$(SRCPATH:.cpp=.o))
DEPS := $(OBJS:.o=.d)

# Colors
BLACK	:= "\e[0;30m"
RED		:= "\e[0;31m"
GREEN	:= "\e[0;32m"
YELLOW	:= "\e[0;33m"
BLUE	:= "\e[0;34m"
PURPLE	:= "\e[0;35m"
CYAN	:= "\e[0;36m"
WHITE	:= "\e[0;37m"
RESET	:= "\e[0m"

$(OBJDIR)%.o: $(SRCDIR)%.cpp Makefile
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@
	@echo $(BLUE)Compiling $@$(RESET)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN)$(NAME) compiled$(RESET)

-include $(DEPS)

clean:
	@rm -rf $(OBJDIR)
	@echo $(GREEN)Object files cleaned$(RESET)

fclean: clean
	@rm -rf $(NAME)
	@echo $(GREEN)$(NAME) cleaned$(RESET)

re: fclean all

.PHONY: all clean fclean re