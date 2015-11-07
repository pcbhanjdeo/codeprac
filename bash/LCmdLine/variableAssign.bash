# !/bin/bash

declare  a=10
echo "The value of a after declaring its value to be 10 = $a"

declare -r a="bhanj"
echo "The value of a after declaring its value to be read only = $a"

declare -i b="bhanj"
echo "value of b after delaring it as a intezer only = $b"

b=20
echo "value of b after reassigning it to 20 = $b"

b="junk"
echo $b

