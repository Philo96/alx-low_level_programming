#!/bin/bash
c_files=( *.c )
gcc -c "${c_files[@]}"
ar rcs liball.a *.o
rm -f *.o
