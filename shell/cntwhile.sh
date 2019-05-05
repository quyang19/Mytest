#!/bin/bash
i=0
while [ $i -le 20 ] 
do
  let i++
  if [ $[i%6] -ne 0 ]
  then continue
  fi
  #[ $[i%6] -ne 0 ] && continue
  echo $[i*i]
done
