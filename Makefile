build: src/*.c
	mkdir build
	gcc -o build/dividend-tracker.exe -Werror src/*.c
	./build/dividend-tracker.exe
	
run:
	./build/dividend-tracker.exe

clean:
	rm build/dividend-tracker.exe
	rm build/dividend-database.db
	rmdir build
