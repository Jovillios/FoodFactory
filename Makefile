# build
build: main
	rm -rf *.o
main: main.o Burger.o BurgerFactory.o PizzaFactory.o Pizza.o SushiFactory.o Sushi.o FoodFactory.o
	g++ -o main main.o Burger.o BurgerFactory.o Pizza.o PizzaFactory.o Sushi.o SushiFactory.o FoodFactory.o
main.o : src/main.cpp src/FoodFactory.h src/BurgerFactory.h src/PizzaFactory.h src/SushiFactory.h
	g++ -c -Wall --std=c++17 src/main.cpp
Burger.o: src/Burger.cpp src/Burger.h src/iFood.h
	g++ -c -Wall --std=c++17 src/Burger.cpp
Sushi.o: src/Sushi.cpp src/Sushi.h src/iFood.h
	g++ -c -Wall --std=c++17 src/Sushi.cpp
Pizza.o: src/Pizza.cpp src/Pizza.h src/iFood.h
	g++ -c -Wall --std=c++17 src/Pizza.cpp
BurgerFactory.o: src/BurgerFactory.cpp src/BurgerFactory.h src/FoodFactory.h
	g++ -c -Wall --std=c++17 src/BurgerFactory.cpp
PizzaFactory.o: src/PizzaFactory.cpp src/PizzaFactory.h src/FoodFactory.h
	g++ -c -Wall --std=c++17 src/PizzaFactory.cpp
SushiFactory.o: src/SushiFactory.cpp src/SushiFactory.h src/FoodFactory.h
	g++ -c -Wall --std=c++17 src/SushiFactory.cpp
FoodFactory.o: src/FoodFactory.cpp src/FoodFactory.h src/iFood.h
	g++ -c -Wall --std=c++17 src/FoodFactory.cpp


# clean
.PHONY: clean
clean:
	rm -rf main *.o