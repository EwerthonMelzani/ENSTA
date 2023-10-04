#!/bin/bash

for fichiers in $(ls)
do
    if [ -f "$fichiers" ];then

        if [ "$fichiers" =~ ^Classe_[1-9]_lesson ];then

            arquivo="$fichiers"

            mkdir ""

        fi

    fi

done