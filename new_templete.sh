#!/bin/bash

file=$1
if  [ ${#file} -eq 0 ]; then
    echo "Usage error."
    echo "usage : ./new_templete.sh [file_name]"
    exit 0
fi
file="$PWD/ex$1.cpp"
is_file_exist(){
    [[ -f $1 ]] && return 0 || return 1
}

is_empty(){
    [[ -s $1 ]] && return 1 || return 0
}
if ! is_file_exist $file ; then
    touch $file
    echo "- $1 file is created."
else
    echo "- \"$1\" file has already created."
fi
if is_empty $file ; then
    echo "#include <iostream>" >> $file
    echo >> $file
    echo "int main(){" >> $file
    echo "  return 0;" >> $file
    echo "}" >> $file
    echo "- Declelaed intepretor to bash."
fi

code $file
echo "- Opened with Virtual Studio Code."