#bin/bash

awk '{for(i=1;i<=NF;++i) print $i}' words.txt |sort |uniq -c|sort -k 1 -r -n |awk '{print $2" "$1}'

