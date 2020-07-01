#/bin/bash
grep "HETATM" 4HKDog.pdb > HETATMlist
awk 'BEGIN { }
    {
   sumx+=$7;
   sumy+=$8; 
   sumz+=$9;
   NR1 = NR -1



}
END { printf "Meanx= %.3f\nMeany= %.3f\nMeanz= %.3f\n", sumx/NR1, sumy/NR1, sumz/NR1 }' HETATMlist

