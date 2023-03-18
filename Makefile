TARGET = calc
TEST_TARGET = mathlib_tests

SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))
TEST_SRC = mathlib_tests.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic -g

.PHONY: all clean pack test doc run profile

.DEFAULT_GOAL := all

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJ)

$(TEST_TARGET): $(TEST_OBJ)

clean:
	rm -f $(OBJ) $(TARGET) $(TEST_OBJ) $(TEST_TARGET)

pack: 

test:
	./$(TEST_TARGET)

doc:

run:

profile:
