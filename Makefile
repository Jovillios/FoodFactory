# build
build: main
	rm -rf *.o
main: main.o Burger.o BurgerFactory.o FoodFactory.o
	g++ -o main main.o Burger.o BurgerFactory.o FoodFactory.o
main.o : src/main.cpp src/FoodFactory.h src/BurgerFactory.h
	g++ -c -Wall --std=c++17 src/main.cpp
Burger.o: src/Burger.cpp src/Burger.h src/iFood.h
	g++ -c -Wall --std=c++17 src/Burger.cpp
BurgerFactory.o: src/BurgerFactory.cpp src/BurgerFactory.h src/FoodFactory.h
	g++ -c -Wall --std=c++17 src/BurgerFactory.cpp
FoodFactory.o: src/FoodFactory.cpp src/FoodFactory.h src/iFood.h
	g++ -c -Wall --std=c++17 src/FoodFactory.cpp


# clean
.PHONY: clean
clean:
	rm -rf main *.o