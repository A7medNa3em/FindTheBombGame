SHELL= cmd

SRCS=$(wildcard *.c)
object=$(SRCS:%.c=%.o)
deps =object=$(SRCS:%.c=%.d)

TARGET = application.exe

CC= gcc
CFLAGS= -Wall -c
DFLAGS= -MMD -MF

all:${TARGET}

${TARGET}: $(object)
	${CC} $(object) -o ${TARGET}

%.o: %.c
	${CC} ${CFLAGS} $< -o $@ ${DFLAGS} $(@:%.o=%.d)

clean:
	del ${TARGET} $(object) ${deps}


-include $(deps)