#!bin/bash
awk '$1!="ATOM  "{next};!i++{min=max=$7;}{for(k=7;k<i=9;k++){min=(min<$k)?min:$k;max(max>$k)?max:$k}}END{printf "The Max is %.2f. The Min value %.2f.\n", max, min}' atomlist 

