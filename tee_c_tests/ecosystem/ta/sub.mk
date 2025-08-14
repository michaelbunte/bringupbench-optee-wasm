global-incdirs-y += include
# srcs-y += hello_world_ta.c $(wildcard include/common/*.c)
srcs-y += hello_world_ta.c \
	include/common/libtarg.c \
	include/common/libmin_abs.c \
	include/common/libmin_strlen.c \
	include/common/libmin_rand.c \
	include/common/libmin_fail.c
# include/common/libtarg.c 

# To remove a certain compiler flag, add a line like this
#cflags-template_ta.c-y += -Wno-strict-prototypes

