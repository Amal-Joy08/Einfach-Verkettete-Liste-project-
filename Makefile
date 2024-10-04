# Compiler and flags
CC = g++
CFLAGS = -Wall -g

# Target executable
TARGET = Einfach_Verkettete_Liste

# Source files
SRCS = main.cpp types.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target: build the executable
all: $(TARGET)

# Rule to build the executable from object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .cpp files into .o object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)
