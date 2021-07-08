FREEGLUT_INCLUDES="include/GL"
FREEGLUT_LIBS="lib"

CFLAGS= -g -O3 
LIBS = 
C_SRC = $(wildcard *.c)
C_OBJ = $(patsubst %c, %o, $(C_SRC))
CPP_SRC = $(wildcard *.cpp)
CPP_OBJ = $(patsubst %cpp, %o, $(CPP_SRC))
 
.PHONY:all clean
 
all:$(CPP_OBJ) $(C_OBJ)
 
.c.o:
	gcc  -lmingw32 $(CFLAGS) -I ./include -L ./lib   -lfreeglut  -lopengl32 -static  -o main.exe
.cpp.o:
	g++ $(CFLAGS) -o $@ $< $(LIBS)
 
 
clean:
	rm *~ *.o -f