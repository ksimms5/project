#!/bin/bash
awk -F '[-,]' '
function abs(v) {return v < 0 ? -v : v}
{split($0, arr, "/"); 
knut = abs((arr[1]*23 + arr[2]*17) + arr[3]);
print knut;
}' lab2dat

