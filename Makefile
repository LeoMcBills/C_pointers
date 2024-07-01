# Compiler

cc = gcc

# Compiler flags
CFLAGS = -Wall -g

# Target executable
TARGET = myprogram

# Source files
SRCS = main.c shout_out.c greet.c main.h

# Object files
OBJS = $(SRCS:.c=.o)

# Default rule (first rule is the default rule)
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .c files into .o files
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
    rm -f $(TARGET) $(OBJS)
