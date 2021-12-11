objects = main.o input.o
objects += calcu.o

main:$(objects)
	gcc -o main $(objects)
%.o:%.c
	gcc -c $<

clean:
	rm *.o
	rm main


name = czy
name = chen
curname ?= $(name)
printf:
	@echo curname:$(curname)


















