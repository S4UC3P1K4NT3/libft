CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_itoa.c ft_split.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strtrim.c ft_substr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strjoin.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c
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
