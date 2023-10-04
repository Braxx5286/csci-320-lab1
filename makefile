lab1.o: lab1.c
	$(CC) -c $?

main.o: main.c
	$(CC) -c $?

explode: lab1.o main.o
	$(CC) -o $?

clean:
		-rm -f *.o
		@echo "All Clean!"