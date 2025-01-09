set -x
rm exe
clear
g++ $1.cpp -DLOCAL -o2 -std=c++20 -o exe | head -n 10
./exe < in 2> deb
