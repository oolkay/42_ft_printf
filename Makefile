NAME	= libftprintf.a
CC		= gcc
CCFLAG	= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar rcs

SRC 	= $(wildcard *.c)
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
		@printf $(cyan)
		$(AR) $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CCFLAG) -c $< -o $@

norminette:
	@printf $(blue)
	@norminette

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re norminette

surprise:
	@clear
	@sleep 0.5
	@printf $(magenta)
	@echo "	────────────────────▄▄▄▄"
	@echo "────────────────▄▄█▀▀──▀▀█▄"
	@echo "─────────────▄█▀▀─────────▀▀█▄"
	@echo "────────────▄█▀──▄▄▄▄▄▄──────▀█"
	@echo "────────────█───█▌────▀▀█▄─────█"
	@echo "────────────█──▄█────────▀▀▀█──█"
	@echo "────────────█──█──▀▀▀──▀▀▀▄─▐──█"
	@echo "────────────█──▌────────────▐──█"
	@echo "────────────█──▌─▄▀▀▄───────▐──█"
	@echo "───────────█▀▌█──▄▄▄───▄▀▀▄─▐──█"
	@echo "───────────▌─▀───█▄█▌─▄▄▄────█─█"
	@echo "───────────▌──────▀▀──█▄█▌────█"
	@echo "───────────█───────────▀▀─────▐"
	@echo "────────────█──────▌──────────█"
	@echo "────────────██────█──────────█"
	@echo "─────────────█──▄──█▄█─▄────█"
	@echo "─────────────█──▌─▄▄▄▄▄─█──█"
	@echo "─────────────█─────▄▄──▄▀─█"
	@echo "─────────────█▄──────────█"
	@echo "─────────────█▀█▄▄──▄▄▄▄▄█▄▄▄▄▄"
	@echo "───────────▄██▄──▀▀▀█─────────█"
	@echo "──────────██▄─█▄────█─────────█"
	@printf $(yellow)
	@echo "───▄▄▄▄███──█▄─█▄───█─────────██▄▄▄"
	@echo "▄█▀▀────█────█──█▄──█▓▓▓▓▓▓▓▓▓█───▀▀▄"
	@echo "█──────█─────█───████▓▓▓▓▓▓▓▓▓█────▀█"
	@echo "█──────█─────█───█████▓▓▓▓▓▓▓█──────█"
	@echo "█─────█──────█───███▀▀▀▀█▓▓▓█───────█"
	@echo "█────█───────█───█───▄▄▄▄████───────█"
	@echo "█────█───────█──▄▀───────────█──▄───█"
	@echo "█────█───────█─▄▀─────█████▀▀▀─▄█───█"
	@echo "█────█───────█▄▀────────█─█────█────█"
	@echo "█────█───────█▀───────███─█────█────█"
	@echo "█─────█────▄█▀──────────█─█────█────█"
	@echo "█─────█──▄██▀────────▄▀██─█▄───█────█"
	@echo "█────▄███▀─█───────▄█─▄█───█▄──█────█"
	@echo "█─▄██▀──█──█─────▄███─█─────█──█────█"
	@echo "██▀────▄█───█▄▄▄█████─▀▀▀▀█▀▀──█────█"
	@echo "█──────█────▄▀──█████─────█────▀█───█"
	@echo "───────█──▄█▀───█████─────█─────█───█"
	@echo "──────▄███▀─────▀███▀─────█─────█───█"
	@echo "─────────────────────────────────────"
	@echo "▀█▀─█▀▄─█─█─█▀────▄▀▀─▀█▀─▄▀▄─█▀▄─█─█"
	@echo "─█──█▄▀─█─█─█▀────▀▀█──█──█─█─█▄▀─█▄█"
	@echo "─▀──▀─▀─▀▀▀─▀▀────▀▀───▀───▀──▀─▀─▄▄█"
	@echo "─────────────────────────────────────"


####	C	O	L	O	R	S	####
black 				=	"[1;30m"
red 				=	"[1;31m"
green 				=	"[1;32m"
yellow 				=	"[1;33m"
blue 				=	"[1;34m"
magenta 			=	"[1;35m"
cyan 				=	"[1;36m"
white 				=	"[1;37m"
####	C	O	L	O	R	S	####