all:
	clang src/main.c -o build/main -lraylib -lpthread -lGL -ldl -lm
	./build/main
	rm -rf build/main
