#!/bin/bash
read -p "请输入分数(0-100):" grade
if [ "$grade" -ge "80" ] && [ "$grade" -le "100" ];
then echo "$grade 分"
fi

