SRC := ft_strlen.c ft_memcpy.c ft_isalpha.c ft_isdigit.c ft_memmove.c ft_toupper.c ft_tolower.c  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_memchr.c # source files to compile
OBJS := ${SRC:.c=.o} # objects file to compile, expression changes every .c to .o
FLAGS := -W -W -W 

$(NAME): $(SRCS) # declare a target named $(NAME), depends on $(SRC) which basically means that without the sources this target cant be invoked .c // # call gcc and tell it to compile our source files with the flags to object files
	@gcc -c $(FLAGS) $(SRC) 

build_lib: $(OBJS) # declare a target named build_lib, which compreses our objects files into a single library (.a) file with the ar tool, this target require .obj files to present
	@ar rcs libft.a $(OBJS)

clean: # target the calls the rm command to delete object files
	@rm -rf *.o

fclean: clean # target that requires the target clean to be present (note that when a requirement is a target the requirement gets called) then the target itself gets called
	@rm -rf libft.a

re: fclean all # target that deletes every outputed file and rebuilds again

all: build_lib # all is a target thats required to exist in a Makefile, it gets called by default when no argument is passed to the `make` command # note that by default `make` calls the first declared target in the Makefile, then all gets called
				