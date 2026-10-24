CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = *.c
OBJS = $(SOURCES:.c=.o)
TARGET = libft.a

all: $(TARGET)

$(TARGET): $(OBJS)
	ar -rcs $(TARGET) $(OBJS)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: fclean clean all re
