set -x
rm exe
# clear
# g++ $1 -DLOCAL -o2 -std=c++20 -o exe -fdiagnostics-color=always 2>&1 | head -n $2
g++ $1 -DLOCAL -o2 -std=c++20 -o exe 2>&1 | head -n $2
./exe < in 2>&$3
rm exe
