all:
	clang src/main.c -o build/main -lraylib -lm
	./build/main
	rm -rf build/main
