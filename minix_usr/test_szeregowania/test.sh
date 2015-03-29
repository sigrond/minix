#!/bin/sh

for((i=0;i<10;i++))
do
time ./test &
time ./test_zwykly &
done
