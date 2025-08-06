PROG := ackermann
EXE  := $(PROG).sa

LOCAL_OBJS := $(PROG).o

TARG_OBJ := ../target/libtarg.o

OBJS := $(LOCAL_OBJS) $(TARG_OBJ)
TYPE ?= DEFAULT

LIBDIR := ../common
LIBA := $(LIBDIR)/libmin.a
LIBMIN_SRCS := libmin_abs libmin_acos libmin_asin libmin_atan libmin_atof \
  libmin_atoi libmin_atol libmin_ctype libmin_exp libmin_fabs libmin_fail \
  libmin_floor libmin_fnv1a libmin_getopt libmin_malloc libmin_mclose \
  libmin_memcmp libmin_memcpy libmin_memmove libmin_memset libmin_meof \
  libmin_mgetc libmin_mgets libmin_mopen libmin_mread libmin_msize \
  libmin_pow libmin_printf libmin_putc libmin_puts libmin_qsort libmin_rand \
  libmin_rempio2 libmin_scalbn libmin_scanf libmin_sincos libmin_sqrt \
  libmin_strcat libmin_strchr libmin_strcmp libmin_strcpy libmin_strcspn \
  libmin_strdup libmin_strlen libmin_strncat libmin_strncmp libmin_strncpy \
  libmin_strpbrk libmin_strrchr libmin_strspn libmin_strstr libmin_strcasestr \
  libmin_strtok libmin_strtol libmin_success libmin_strncasecmp

LIBMIN_OBJS := $(addprefix $(LIBDIR)/,$(addsuffix .o, $(LIBMIN_SRCS)))

CFLAGS := -Wall -O3 -g -DTARGET_SA -I$(LIBDIR) -I../target -D$(TYPE)

all: $(EXE)

$(EXE): $(OBJS) $(LIBA) 
	$(CC) $(CFLAGS) -o $@ $^

$(PROG).o: $(PROG).c libs/integrate.h
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIBA): $(LIBMIN_OBJS)
	$(AR) rcs $@ $^

$(LIBDIR)/%.o: $(LIBDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

run: $(EXE)
	./$(EXE) > FOO
	diff FOO $(PROG).out
	rm -f FOO

clean:
	rm -f $(EXE) $(LOCAL_OBJS) $(LIBMIN_OBJS) $(LIBA) FOO
	rm -f $(TARG_OBJ)

.PHONY: all run clean
