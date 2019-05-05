#!/bin/bash
ULIST=$(cat user.txt)
for UNAME in $ULIST
do
   useradd $UNAME
   echo "123456" | passwd --stdin $UNAME
done
