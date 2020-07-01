#!/bin/awk

spacer ="";
newsub("-",$0)
split($0,converter, "/")
knuts =(converter[1]*23 converter[2])*17+converter[3];

echo knuts;

