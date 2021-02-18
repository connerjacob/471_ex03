# change application name here (executable output name)
TARGET=cpuscheduling

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
LDFLAGS=$(PTHREAD)  -export-dynamic

OBJS=    main.o

all: $(OBJS)
	$(LD) -o build/$(TARGET) obj/$(OBJS) $(LDFLAGS)
    
main.o: src/cpuscheduling.c
	$(CC) -c $(CCFLAGS) src/cpuscheduling.c -o obj/main.o

run:
	./build/cpuscheduling
clean:
	rm -f obj/*.o build/$(TARGET)
