SRC		=	main.cpp Phonebook.cpp Contact.cpp
OBJ		=	$(SRC:.cpp=.o)

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	phonebook

$(NAME)	:	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

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



