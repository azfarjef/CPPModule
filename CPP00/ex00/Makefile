SRC		=	megaphone.cpp
OBJ		=	$(SRC:.cpp=.o)

CXX	=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	megaphone

$(NAME)	:	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

test	:	$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone

.PHONY	:	all clean fclean re



