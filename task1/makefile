# change application name here (executable output name)
TARGET=build/cpuscheduling

# compiler
CC=gcc
# debug
DEBUG=-g
# optimisation
OPT=-O0
# warnings
WARN=-Wall

PTHREAD=-lpthread

CCFLAGS=$(DEBUG) $(OPT) $(WARN) $(PTHREAD) -pipe

# linker
LD=gcc
LDFLAGS=$(PTHREAD) $(GTKLIB) -export-dynamic

OBJS=    objs/main.o

all: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(LDFLAGS)
    
main.o: src/cpuscheduling.c
	$(CC) -c $(CCFLAGS) src/cpuscheduling.c -o objs/main.o

run:
	./build/cpuscheduling
clean:
	rm -f *.o $(TARGET)
