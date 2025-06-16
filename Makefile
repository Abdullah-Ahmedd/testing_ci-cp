# Makefile for testing_ci-cp project
CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall -Wno-unused-parameter -Wno-unused-function -Wno-sign-compare
SQLITE_FLAGS = -DSQLITE_OMIT_LOAD_EXTENSION -DSQLITE_ENABLE_RTREE -DSQLITE_ENABLE_FTS3 -DSQLITE_ENABLE_FTS3_PARENTHESIS
DEBUG_FLAGS = -g -DDEBUG
OPTIMIZE_FLAGS = -O3 -DNDEBUG

# Source files
SOURCES = main.cpp sqlite3.c
TARGET = main
DEBUG_TARGET = main_debug
OPTIMIZED_TARGET = main_optimized

# Default target
all: $(TARGET) $(DEBUG_TARGET) $(OPTIMIZED_TARGET)

# Basic build
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SQLITE_FLAGS) -o $@ $^

# Debug build
$(DEBUG_TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SQLITE_FLAGS) $(DEBUG_FLAGS) -o $@ $^

# Optimized build
$(OPTIMIZED_TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SQLITE_FLAGS) $(OPTIMIZE_FLAGS) -o $@ $^

# Test target
test: all
	@echo "Running basic test..."
	./$(TARGET)
	@echo ""
	@echo "Running debug test..."
	./$(DEBUG_TARGET)
	@echo ""
	@echo "Running optimized test..."
	./$(OPTIMIZED_TARGET)

# Clean target
clean:
	rm -f $(TARGET) $(DEBUG_TARGET) $(OPTIMIZED_TARGET)

# Check if files exist
check:
	@echo "Checking required files..."
	@test -f main.cpp && echo "✓ main.cpp exists" || echo "✗ main.cpp missing"
	@test -f sqlite3.c && echo "✓ sqlite3.c exists" || echo "✗ sqlite3.c missing"
	@test -f sqlite3.h && echo "✓ sqlite3.h exists" || echo "✗ sqlite3.h missing"

# Install dependencies (Ubuntu/Debian)
install-deps:
	sudo apt-get update
	sudo apt-get install -y build-essential

.PHONY: all test clean check install-deps
