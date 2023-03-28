TARGETS = doctests calc profiling gui
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))

CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall -Wextra -pedantic -g -lm

.PHONY: all clean pack test doc run profile

.DEFAULT_GOAL := all

all: $(TARGETS)

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $^

calc: 
#gui + parser + mathlib

gui: 
#GUI

doctests: doctests.o mathlib.o
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f *.o $(TARGETS)

pack:

test:
	@echo "==============================================================================="
	@echo "RUNNING DOCTESTS"
	./doctests
	@echo "==============================================================================="

doc:

run:

profile:
