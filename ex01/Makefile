##############################  SOURCE & OBJETS  ###############################
INCLUDES = Makefile easyfind.hpp

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

################################  VARIABLES  ###################################

NAME = Easyfind

RM = rm -f

GCCF = c++ -Wall -Wextra -Werror -std=c++98

##################################  RULES  #####################################

all :	$(NAME)


$(NAME):	$(OBJS) $(INCLUDES)
	${GCCF} $(OBJS) -o $@

%.o: %.cpp			$(INCLUDES)
	${GCCF} -c $< -o $@ 

############################  CLEAN & RE & phony  ##############################

clean:
	${RM} ${OBJS} 

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re


#################################### FIN  ######################################
