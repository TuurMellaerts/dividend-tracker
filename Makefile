dividend-tracker: src/*.c
	gcc -o dividend-tracker.exe src/*.c
	./dividend-tracker.exe

clean:
	rm dividend-tracker.exe
