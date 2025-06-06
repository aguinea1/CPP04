
NAME		=	🅸🅽🆃🅴🆁🅵🅰🅲🅴
SRCS		=	AMateria.cpp\
				Character.cpp\
				Cure.cpp\
				Ice.cpp\
				Main.cpp\
				MateriaSource.cpp

CC			=	c++

INCLUDES    =  -I ./ 

RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 #Para utilizar override pero me sigue dando warning

OBJS		=	$(SRCS:.cpp=.o)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $< -o $@ $(INCLUDES)

all: $(NAME)

$(NAME) : $(OBJS) 
		@$(CC) $(CFLAGS) $(OBJS) -o $@ $(INCLUDES)
		@echo '$(NAME) compiled'
fclean: clean
		@$(RM) $(NAME)
clean: 
		@$(RM) $(OBJS)

re: fclean all

.PHONY	: all clean fclean re
