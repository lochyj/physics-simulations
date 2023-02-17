cls

x86_64-w64-mingw32-g++ -c src/main.cpp -o ./build/main.o

ld -r build/main.o -o build/main.exe

cd build

.\main.exe

cd ../