NAME = hiThisIsBrain

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ := main.o

all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "Compiling hiThisIsBrain..."
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "hiThisIsBrain is ready"

clean:
	@echo "Removing .o object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo "Removing hiThisIsBrain..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean