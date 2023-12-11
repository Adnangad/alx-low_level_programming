#!/bin/bash
c_file=$(ls *.c)
for file in $c_file; do
	gcc -c -fPIC $file
done
gcc -shared -o liball.so *.o
