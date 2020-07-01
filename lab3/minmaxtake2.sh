#/bin/bash
awk 'BEGIN { maxx = -1; minx = -1; maxy = -1; miny = -1; maxz = -1; minz = -1}
   $1 == "ATOM" {
   maxx = maxx < $7 ? $7 : maxx;
   minx = (minx == -1 || minx > $7) ? $7 : minx;
  
   maxy = maxy < $8 ? $8 : maxy;
   miny = (miny == -1 || miny > $8) ? $8 : miny;

   maxz = maxz < $9 ? $9 : maxz;
   minz = (minz == -1 || minz > $9) ? $9 : minz;  

}
END { printf "The max in the x column is %.3f The min in the x column is %.3f\nThe max in the y column is %.3f The min in the y column is %.3f\nThe max in the z column is %.3f The min in the z column is %.3f\n", maxx, minx, maxy, miny, maxz, minz}' 4HKD.pdb 
