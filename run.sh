#!/bin/bash

if [ "$#" -eq 0 ]; then

    echo "Usage: $0 <filename>"
    exit 1
else

        filename="$1"
        filepath=$(find . -type f -name "$filename")

        if [[ ! -e "$filepath" ]]; then
                echo "[x] Provide a c file"
                exit 1
        else
                if [[ "$filepath" =~ .+[.]c$ ]]; then

                        without_ext="${filepath%.*}"
                        gcc -trigraphs -pedantic -Wall -o "$without_ext.out" "$filepath"

                        if [[ $? -eq 0 ]]; then
                        
                                new_file="$without_ext.out"
                                "$new_file"
                                
                                echo "[√] Done"
                                rm $new_file
                                exit 0
                        else
                                echo "[x] Compiling failed"
                                exit 1
                        fi

                else
                        echo "[x] File is not supported"
                        exit 1
                fi
        fi
fi