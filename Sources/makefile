IDIR = ../Headers
CC = gcc
CFLAGS = -std=c11 -I$(IDIR) -g

ODIR = ../bin
LDIR = ../lib

LIBS = -lm

_DEPS := $(wildcard $(IDIR)/*.h)
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

source := $(wildcard *.c)
_OBJ = $(source:.c=.o)
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	@echo 'Building'
	@echo '$(DEPS)'
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 