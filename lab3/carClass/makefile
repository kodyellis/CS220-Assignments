a.out: car.o test-car5.o
    c++ car.o test-car5.o

test-car5.o: test-car5.cpp
    c++ -c test-car5.cpp

car.o: car.cpp car.h
   c++ -c car.cpp

run:
   ./a.out
