rm *.o

rm *.out


g++ -c -Wall -no-pie -m64 -std=c++17 -o main.o main.cpp


g++ -m64 -no-pie -o final.out main.o -std=c++17

echo "Start of program"
./final.out



rm *.o

rm *.out
