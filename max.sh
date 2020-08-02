#!/bin/bash
#!/usr/bin/awk

$1 != "ATOM  " {
    next
}
!i++ {
    min = $2; max = $2
}

    for (j = 7; j <= 9; ++j) {
        min = (min < $j) ? min : $j
        max = (max > $j) ? max : $j
    }

END {
    printf "Max value is %.2f. Min value is %.2f.\n", max, min
} 
