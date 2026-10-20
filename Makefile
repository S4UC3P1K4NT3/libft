CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = 
OBJECTS = $(SOURCES:.c=.o)
TARGET = libft.a

all: 
   $(CC) $(CFLAGS) -o $(OBJECTS) -c $(SOURCES)

clean:
   rm -f $(OBJECTS)

fclean: clean
   rm -f $(TARGET)
