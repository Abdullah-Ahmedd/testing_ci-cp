TARGET = testing_ci_cp
SRC = main.cpp

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

all:
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
