#!bin/bash
grep "ATOM  " 4HKDog.pdb > atomlist2
sort -k 11 atomlist2
