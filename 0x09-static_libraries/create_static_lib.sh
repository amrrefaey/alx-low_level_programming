#!/bin/bash

rm -f liball.a

for file in *.c; do
	    gcc -c "$file"
	        object_file="${file%.c}.o"
		    ar -rc liball.a "$object_file"
	    done

	    ranlib liball.a

	    rm -f *.o

	    echo "Static library liball.a created successfully."
