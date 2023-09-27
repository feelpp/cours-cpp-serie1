# Compiler tous les fichiers .cpp dans le répertoire courant
CXX = g++

# List of all source files
SOURCES := $(wildcard *.cpp) # <1>

# Flags for the C++ compiler
CXXFLAGS = -Wall -O2 --std=c++17 # <2>

# List of all executables to be generated
EXECUTABLES := $(SOURCES:%.cpp=%.exe) #<3>

# Default rule
all: $(EXECUTABLES) # <4>

# Rule to generate each executable
%.exe: %.cpp  # <5>
	$(CXX) $(CXXFLAGS) $< -o $@

# Rule for cleaning up the executables
clean: # <6>
	rm -f $(EXECUTABLES)