CL		=	clang++
CFLAGS	= 	-Werror -Wall -Wextra -std=c++98
NAME	=	claptrap
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJECT  =	$(SRC:.cpp=.o)

all:		$(NAME)
$(NAME): 	$(OBJECT)
			$(CL) $(CFLAGS) $(OBJECT) -o $(NAME)
.c.o:
			${CL} ${FLAGS} -c $<
clean:
			rm -f $(OBJECT)

fclean:		clean
			rm -f $(NAME) *.replace

re:			fclean all
.PHONY:		all clean fclean re