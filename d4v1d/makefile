objects = name.o tokenizer.o

all: d4v1d

d4v1d : d4v1d.o $(objects)
	gcc -Wall -o $@ $< $(objects)

%.o : %.c
	gcc -Wall -c -g $<

clean:
	rm -f d4v1d
	rm -f d4v1d.o
	rm -f $(objects)
