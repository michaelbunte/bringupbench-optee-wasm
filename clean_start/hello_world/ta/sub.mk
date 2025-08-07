global-incdirs-y += include
# srcs-y += hello_world_ta.c $(wildcard include/common/*.c)
srcs-y += hello_world_ta.c \
	include/common/libmin_abs.c 
# include/common/libtarg.c \
# include/common/libmin_printf.c

# To remove a certain compiler flag, add a line like this
#cflags-template_ta.c-y += -Wno-strict-prototypes

