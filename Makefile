# build
build: main
	rm -rf *.o
main: main.o sushi.o
	g++ -o main main.o sushi.o
main.o : src/main.cpp
	g++ -c -Wall --std=c++17 main.cpp
sushi.o: src/Sushi.h src/sushi.cpp src/iFood.h
	g++ -c -Wall --std=c++17 sushi.cpp
burger.o: src/Burger.h src/burger.cpp src/iFood.h
	g++ -c -Wall --std=c++17 sushi.cpp
pizza.o: src/Pizza.h src/pizza.cpp src/iFood.h
	g++ -c -Wall --std=c++17 sushi.cpp

# clean
.PHONY: clean
clean:
	rm -rf main *.o