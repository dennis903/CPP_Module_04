CC = clang++
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98
TARGET = ex03

OBJS = AMateria.cpp \
		Character.cpp \
		Cure.cpp	\
		Ice.cpp	\
		MateriaSource.cpp \
		main.cpp
all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean :
	rm -rf $(TARGET)

fclean : clean
	rm -rf $(TARGET)

re : clean all