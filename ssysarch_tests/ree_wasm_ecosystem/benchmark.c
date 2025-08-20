#include "common/libmin.h"

// 1024 * 1024 * 16

TA_CREATE_ENTRY_POINT
TA_DESTROY_ENTRY_POINT
TA_OPEN_SESSION_ENTRY_POINT
TA_CLOSE_SESSION_ENTRY_POINT

int mainf(void) {
    TIME t0, t1;

    GET_TIME(&t0);
    for (int i = 0; i < 10000000; i++) {
        int *buffer = (int*) MALLOC(100);
        buffer[2] = i;
        FREE(buffer);
    }
    GET_TIME(&t1);

    PRINT_TIME_DELTA_MS(t0, t1);
    return 0;
}


TA_INVOKE_COMMAND_ENTRY_POINT_HEADER {
	TA_INVOKE_COMMAND_ENTRY_POINT_PREAMBLE
	mainf();
	TA_INVOKE_COMMAND_ENTRY_POINT_EPILOGUE
}
