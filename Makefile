TARGET = calc
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))
CXX = g++
CXXFLAGS = -Wall -g -std=c++11

.PHONY: all clean pack test doc run profile

.DEFAULT_GOAL := all

all: $(TARGET)

$(TARGET): $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)
pack: 

test:

doc:

run:

profile:
