# Makefile

// 최종적으로 만들 라이브러리의 이름
NAME = libft.a

// 컴파일 명령어 매크로로 cc 컴파일러 사용
CC = cc

// warning option, c 컴파이러의 플래그
CFLAGS = -Wall -Wextra -Werror

// mendatory c 파일들
SRCS = ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c	ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c	ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c	ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c

// SRCS 매크로에 지정된 것들을 불러오되 .c 부분을 .o로 바꿔서 불러옴
OBJS = $(SRCS:.c=.o)

// all이라는 명령어를 사용하면 libft.a가 생성되도록 함
all: $(NAME)

// .o 파일들을 하나의 라이브러리로 집합
$(NAME) : $(OBJS)
	ar -rcs -o $(NAME) $(OBJS)

// .o 파일이 필요할 때 %.o 타켓을 찾아내어 컴파일
%.o :
	$(CC) $(CFLAGS) -c $(SRCS)

// 생성된 오브젝트 파일을 삭제
clean :
	rm -f $(OBJS)

// 생성된 오브젝트 파일과 라이브러리 파일을 삭제
fclean :
	rm -f $(NAME) $(OBJS)

// fclean 타겟과 all 타겟을 순차적으로 진행
re :
	$(MAKE) fclean
	$(MAKE) all

// 파일명 대신 타겟으로 인식하게 함(타겟과 동일한 이름을 가진 파일을 만들어선 안됨)
.PHONY : all clean fclean re
