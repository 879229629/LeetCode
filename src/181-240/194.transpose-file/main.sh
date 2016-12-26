#!/bin/bash

# awk '{for(i=1;i<=NF;++i) print i" "$i}' file.txt |sort  --stable -k1 -n |awk 'BEGIN{ORS="";flag="";i=0}  {if(flag != "" && flag!=$1) {i=0;print "\n"} flag=$1;if(i++!=0) print " ";print $2}'

awk '{ \
    for(i=1;i<=NF;++i) {   \
       if(NR==1) s[i] = $i;     \
       else s[i] = s[i] " " $i; \
       }                  \
}END{ \
    for(i=1;s[i]!="";++i) print s[i]; \
}' file.txt


