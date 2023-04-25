TARGETS = doctests calc profile
EXEC = calc
SRC = arguments_parser.cpp doctests.cpp mathlib.cpp stddev.cpp
OBJ = $(patsubst %.cpp,%.o,$(SRC))
DESTDIR = $(EXEC)-01
INSFLAGS = -m 0755

CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall -Wextra -pedantic -g

.PHONY: all clean pack test doc run profile install

.DEFAULT_GOAL := all

all: $(TARGETS)

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $^

$(EXEC):
	if ! dpkg-query -W qtbase5-dev; then sudo apt-get install qtbase5-dev; fi
	qmake && make -f QMakefile

doctests: doctests.o mathlib.o
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f *.o $(TARGETS) stddev && make clean -f QMakefile && rm -f .qmake.stash QMakefile

pack:
#zip file will pack all the files and directories from the parent directory recursively and will be created in the parent directory
	cd .. && zip -r xeffen00_xvalik05_xhorut01_xhejni00.zip .

test: doctests
	@echo "==============================================================================="
	@echo "RUNNING DOCTESTS"
	./doctests
	@echo "==============================================================================="

doc:
	if ! dpkg-query -W doxygen; then sudo apt-get install doxygen; fi
	doxygen Doxyfile

run: calc
	@echo "==============================================================================="
	@echo "RUNNING CALCULATOR"
	./calc
	@echo "==============================================================================="

profile: stddev.o mathlib.o
	$(CXX) $(CXXFLAGS) -pg $^ -o stddev

install: $(EXEC)
	mkdir -p $(DESTDIR)/usr/bin
	install $(INSFLAGS) $(EXEC) $(DESTDIR)/usr/bin
