CC = gcc  
CFLAGS = -Wall -g  
NAME = tictactoe 

SRCS = main.c tictactoe.c  

all: $(NAME) 

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) 

clean:
	rm -f $(NAME) 

re: clean all 
