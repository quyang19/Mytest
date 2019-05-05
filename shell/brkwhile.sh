#!/bin/bash
while read -p "请输入累加的整数0代表结束" x
do
[ $x -eq 0 ]&&break
SUM=$[ SUM+x ]
done

echo "总和是：$SUM"
