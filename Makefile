TARGET = calc
TEST_TARGET = doctests

SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))

CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall -Wextra -pedantic -g

.PHONY: all clean pack test doc run profile

.DEFAULT_GOAL := all

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJ) mathlib.h

$(TEST_TARGET): doctests.cpp mathlib.h mathlib.cpp
	$(CXX) $(CXXFLAGS) doctests.o mathlib.o -o $(TEST_TARGET)

clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)

pack:

test:
	@echo "==============================================================================="
	@echo "RUNNING DOCTESTS"
	./$(TEST_TARGET)
	@echo "==============================================================================="

doc:

run:

profile:
