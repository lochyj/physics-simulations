clear

g++ -fpermissive -I ./ -I ./include/SFML/include -c src/main.cpp -o ./build/main.o

ld --force-exe-suffix -r ./build/main.o -o ./build/sim.exe

.\build\sim.exe