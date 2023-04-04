TARGETS = doctests calc profile
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
#mkdir build
#cd build
#cmake ..
#cmake --build .


main: main.o parser.o mathlib.o
	$(CXX) $(CXXFLAGS) $^ -o $@

doctests: doctests.o mathlib.o
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f *.o $(TARGETS) stddev

pack:
#zip -r xeffen00_xvalik05_xhorut01_xhejni00.zip ../.

test:
	@echo "==============================================================================="
	@echo "RUNNING DOCTESTS"
	./doctests
	@echo "==============================================================================="

doc:

run:

profile: stddev.o mathlib.o
	$(CXX) $(CXXFLAGS) $^ -o stddev
