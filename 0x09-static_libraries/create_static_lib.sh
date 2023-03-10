#!/bin/bash

# Compile all the .c files in the current directory
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up the object files
rm *.o

echo "Static library liball.a created successfully!"
