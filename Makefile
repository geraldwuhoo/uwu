CC = gcc
CFLAGS = -std=gnu89 -w
EXECS = uwu

all: $(EXECS)

uwu: uwu.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(EXECS)
