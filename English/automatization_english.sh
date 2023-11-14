#!/bin/bash

for fichiers in *
do
    if [ -f "$fichiers" ]; then

        if [[ "$fichiers" =~ ^(Classe_[1-9]_lesson) ]]; then

            # Extract the matched part of the filename
            directory_name="${BASH_REMATCH[1]}"

            # Create the directory if it doesn't already exist
            if [ ! -d "$directory_name" ]; then
                mkdir "$directory_name"
                echo "Created directory: $directory_name"
            fi

            # Move the file to the directory
            mv "$fichiers" "$directory_name/"
            echo "Moved $fichiers to directory $directory_name"
        fi

        if [[ "$fichiers" =~ ^(Classe_[1-9]_lesson\..*) ]]; then

            # Extract the matched part of the filename
            directory_name="${BASH_REMATCH[1]}"

            # Create the directory if it doesn't already exist
            if [ ! -d "$directory_name" ]; then
                mkdir "$directory_name"
                echo "Created directory: $directory_name"
            fi

            # Move the file to the directory
            mv "$fichiers" "$directory_name/"
            echo "Moved $fichiers to directory $directory_name"
        fi
    fi
done
