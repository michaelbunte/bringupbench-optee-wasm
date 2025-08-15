global-incdirs-y += include
srcs-y += tee_c_test.c \
	include/common/libtarg.c \
	include/common/libmin_abs.c \
	include/common/libmin_strlen.c \
	include/common/libmin_rand.c \
	include/common/libmin_fail.c \
	include/common/libmin_sqrt.c \
# include/common/libtarg.c 

# To remove a certain compiler flag, add a line like this
#cflags-template_ta.c-y += -Wno-strict-prototypes

