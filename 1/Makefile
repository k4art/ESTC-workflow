SRCS = app.c vec3f.c
OBJS := $(SRCS:.c=.o)

program: $(OBJS)
	gcc -o $@ $^

%.o: %.c
	gcc -c $^ -o $@

.depend: $(SRCS)
	gcc -MM $^ -o $@

clean:
	rm -f $(OBJS) program

#include .depend
.PHONY: clean

