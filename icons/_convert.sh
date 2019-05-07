#!/bin/bash
for i in *.png ; do
  echo $i
  convert -alpha off -resize 64x64 $i ${i%.png}.xbm
  mv ${i%.png}.xbm ${i%.png}.h
done
