# Source files for the mandatory part of the project
SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_striteri.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c

# Object files corresponding to the source files
OBJS			= $(SRCS:.c=.o)

# Source files for the bonus part of the project
BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

# Object files corresponding to the bonus source files
BONUS_OBJS		= $(BONUS:.c=.o)

# Compiler and flags
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I.

# Command to remove files
RM				= rm -f

# Name of the output library
NAME			= libft.a

# Default target to build the library
all:			$(NAME)

# Rule to create the library from the object files
$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

# Rule to build the bonus version of the library
bonus:			$(NAME) $(BONUS_OBJS)
				ar rcs $(NAME) $(BONUS_OBJS)

# Rule to clean up object files
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

# Rule to clean up everything, including the library
fclean:			clean
				$(RM) $(NAME)

# Rule to recompile everything from scratch
re:				fclean all

# Special target to prevent make from confusing file names with the target names
.PHONY:			all clean fclean re bonus
