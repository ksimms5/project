#!/bin/bash
sed -n -e 's/HETATM/ATOM  /gip' -e 's/MSE/MET/gip' 4HKD.pdb 

