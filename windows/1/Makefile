CXX = g++ -std=c++14 -Wall -Werror

LIBS = -L../lib \
	   -lsfml-graphics \
	   -lsfml-window \
	   -lsfml-system \
	   -lmingw32
INCLUDE_PATH = -I../include

SOURCE_FILES = *.cpp
OUTPUT = ../1.exe

all:
	$(CXX) $(INCLUDE_PATH) $(SOURCE_FILES) -o $(OUTPUT) $(LIBS)