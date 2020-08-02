#!/bin/bash
 find . -type f | awk -v mvCmd='mv "%s" "%s"\n' \
    '{ old=$0;
       gsub(/HETATM/,"ATOM");
       printf mvCmd,old,$0;
     }' | sh
