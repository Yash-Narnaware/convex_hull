

all: final

final: app.o geometry.o
	@echo "Linking and producing final application"
	gcc lib/app.o lib/geometry.o -o bin/a.out
	bin/a.out

app.o: app.c
	@echo "Compiling the main file"
	gcc -c app.c -o lib/app.o

geometry.o: geometry.c
	@echo "Compiling the geometry.c file"
	gcc -c geometry.c -o lib/geometry.o

clean:
	@echo "Removing executables and .o files"
	rm -f lib/app.o lib/geometry.o bin/a.out lib/test.o bin/test.out

test.o: test.c
	gcc -c test.c -o lib/test.o


testcase: test.o geometry.o
	@echo "Running the test cases...."
	gcc lib/test.o lib/geometry.o -o bin/test.out
	bin/test.out

