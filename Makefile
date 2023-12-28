dividend-tracker: src/*.c
	mkdir build
	gcc -o build/dividend-tracker.exe src/*.c
	./build/dividend-tracker.exe

clean:
	rm build/dividend-tracker.exe
	rmdir build
