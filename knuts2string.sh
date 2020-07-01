#/bin/bash
awk   '
{
gallons = int($1/(23*17));
remainder = $1 % (17*23);
sickles = int(remainder/17);
knuts = (remainder % 17);
string = gallons "/" sickles "/" knuts;
print string;
}' labresults
