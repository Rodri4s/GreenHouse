CXX = g++
CXXFLAGS = -I./include
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = main

$(EXECUTABLE): build $(OBJECTS) build/main.o
	$(CXX) $(OBJECTS) build/main.o -o build/$(EXECUTABLE)

build:
	mkdir -p build

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/main.o: build/main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS) build/main.o
