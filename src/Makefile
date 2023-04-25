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
	sudo apt install libdouble-conversion3 libpcre2-16-0 libegl1 libgbm1 libgl1 libice6 libinput10 libmd4c0 libmtdev1 libqt5dbus5 libqt5network5 libsm6 libxcb-glx0 libxcb-icccm4 libxcb-image0 libxcb-keysyms1 libxcb-randr0 libxcb-render-util0 libxcb-shape0 libxcb-sync1 libxcb-xfixes0 libxcb-xinerama0 libxcb-xinput0 libxcb-xkb1 libxkbcommon-x11-0 libxkbcommon0 libqt5svg5 qt5-gtk-platformtheme
	qmake && make -f QMakefile

doctests: doctests.o mathlib.o
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f *.o $(TARGETS) stddev && make clean -f QMakefile && rm -f .qmake.stash QMakefile

pack:
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
