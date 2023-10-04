#!/bin/bash

for fichiers in $(ls)
do

    if [ -f "$fichiers" ];then

        if [[ "$fichiers" =~ ^t[a-Z]*\.c$ ]];then

            fichiers_sans_c="${fichiers%.c}"
            gcc -Wall -Werror -Wfatal-errors "$fichiers" -o "$fichiers_sans_c"
            "./$fichiers_sans_c"

        fi

    fi

done
