#Alias for the makefile:
CC = cc #Compiler to be used (gcc)
CFLAGS = -Wall -Wextra -Werror #The three walls we use
OBJ = main.o #object files (generated in the compilation)
NAME = rush-02 #Definition of the name of the final executable program that comes from main.c

# "All" as the default target to build the executable:
all: $(NAME)

#Rules to compile the executable:
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

#Compile .c into .o
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

# $< This reffers the input file.
# $@ This reffers the output file.

#Clean the object files:
clean:
	rm -f *.o

#Clean all the generated files:
fclean: clean
	rm -f $(NAME)

#Clean all the generated files and then compile the project:
re: fclean all

#default rule:
#.PHONY: clean fclean re
#We use PHONY to ensure that make ALWAYS execute the rules, even if there are files called clean, fclean or re.

#The command to run the compiler will be make.
#The command to clean up the files created during the compilation is
#fclean.