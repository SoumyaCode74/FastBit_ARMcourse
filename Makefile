CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS=-mcpu=${MACH} -std=gnu11 -mthumb

all:main.o math.o stm32_startup.o

main.o:main.c
	${CC} ${CFLAGS} -c $^ -o $@
math.o:math.c
	${CC} ${CFLAGS} -c $^ -o $@
stm32_startup.o:stm32_startup.c
	${CC} ${CFLAGS} -c $^ -o $@

clean:
	if [ -e *.o ] ; then  rm *.o ; fi


