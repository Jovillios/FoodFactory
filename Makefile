# build
build: main
	rm -rf *.o
main: main.o Pizza.o PizzaFactory.o FoodFactory.o
	g++ -o main main.o Pizza.o PizzaFactory.o FoodFactory.o
main.o : src/main.cpp src/FoodFactory.h src/PizzaFactory.h
	g++ -c -Wall --std=c++17 src/main.cpp
Pizza.o: src/Pizza.cpp src/Pizza.h src/iFood.h
	g++ -c -Wall --std=c++17 src/Pizza.cpp
PizzaFactory.o: src/PizzaFactory.cpp src/PizzaFactory.h src/FoodFactory.h
	g++ -c -Wall --std=c++17 src/PizzaFactory.cpp
FoodFactory.o: src/FoodFactory.cpp src/FoodFactory.h src/iFood.h
	g++ -c -Wall --std=c++17 src/FoodFactory.cpp


# clean
.PHONY: clean
clean:
	rm -rf main *.o