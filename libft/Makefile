NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_atoi.c     ft_itoa.c        ft_putnbr_fd.c  ft_strlcpy.c  ft_tolower.c\
		ft_bzero.c    ft_memchr.c      ft_putstr_fd.c  ft_strlen.c   ft_toupper.c\
		ft_calloc.c   ft_memcmp.c      ft_split.c      ft_strmapi.c \
		ft_isalnum.c  ft_memcpy.c      ft_strchr.c     ft_strncmp.c \
		ft_isalpha.c  ft_memmove.c     ft_strdup.c     ft_strnstr.c \
		ft_isascii.c  ft_memset.c      ft_striteri.c   ft_strrchr.c \
		ft_isdigit.c  ft_putchar_fd.c  ft_strjoin.c    ft_strtrim.c \
		ft_isprint.c  ft_putendl_fd.c  ft_strlcat.c    ft_substr.c get_next_line.c\
		get_next_line_utils.c

OBJDIR = objs
OBJCS = $(SRCS:%.c=$(OBJDIR)/%.o)

BONUS_SRCS = ft_lst1bonus.c ft_lst2bonus.c

BONUS_OBJCS = $(BONUS_SRCS:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): $(OBJDIR) $(OBJCS)
	@ar -rcs $(NAME) $(OBJCS) 

$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJCS)
	ar -rcs $(NAME) $(BONUS_OBJCS)

clean:
	rm -f $(OBJCS) $(BONUS_OBJCS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
