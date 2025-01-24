#Alias for the makefile:
NAME = libft.a #Definition of the name of the static library
CC = cc #Compiler to be used (cc)
CFLAGS = -Wall -Wextra -Werror #The three walls we use
# All .c files in the current directory
SRC = ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_toupper.c 
OBJ = $(SRC:.c=.o)  #object files (generated in the compilation)

# "All" as the default target to build the library:
all: $(NAME)

#Rules to create a static library:
$(NAME): $(OBJ)
	ar rcs $@ $^

# ar rcs $@ $^ is the command to create the static library.
# r: Insert object files into the archive.
# c: Create the archive if it doesn’t already exist.
# s: Create an index for the library (optional, but helps with linking).
# $@ refers to the target (libmylibrary.a), and $^ refers to the list of object files ($(OBJ)).

#Compile .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# $< This reffers the input file.
# $@ This reffers the output file.
    
#Clean the object files:
clean:
	$(RM) $(OBJ)

#Clean all the generated files:
fclean: clean
	 $(RM) $(NAME)

#Clean all the generated files and then compile the project:
re: fclean all

#default rule:
#.PHONY: all clean fclean re
#We use PHONY to ensure that make ALWAYS execute the rules, even if there are files called clean, fclean or re.

#The command to create the library will be make.
#The command to clean up the files created during the compilation is
#fclean.

#make to build the library (libft.a).
#clean to remove object files.
#fclean to remove object files and the library.
#re to clean and rebuild the entire project.