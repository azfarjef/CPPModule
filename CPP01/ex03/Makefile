SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ		=	$(SRC:.cpp=.o)

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic #-fsanitize=address

NAME	=	main

$(NAME)	:	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

.cpp.o	:
			${CXX} ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

all		:	$(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re