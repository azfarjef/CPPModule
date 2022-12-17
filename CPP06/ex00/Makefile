SOURCE	=	main.cpp Caster.cpp utilities.cpp
OBJ		=	$(SOURCE:.cpp=.o)

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

NAME	=	Caster

$(NAME)	:	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

.cpp.o	:
			$(CXX) $(CXXFLAGS) -c $< -o $@

all		:	$(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re