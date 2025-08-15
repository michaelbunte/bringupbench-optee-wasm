#include <tee_internal_api.h>
#include <tee_internal_api_extensions.h>
#include <tee_c_test.h>
#include "common/libmin.h"

TA_CREATE_ENTRY_POINT
TA_DESTROY_ENTRY_POINT
TA_OPEN_SESSION_ENTRY_POINT
TA_CLOSE_SESSION_ENTRY_POINT

#define N 1300

void print_matrix(const char* name, double mat[N][N]) {
    libmin_printf("%s =\n", name);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            libmin_printf("%8.4f ", mat[i][j]);
        }
        libmin_printf("\n");
    }
    libmin_printf("\n");
}

void lu_decomposition(double A[N][N], double L[N][N], double U[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int k = i; k < N; k++) {
            double sum = 0;
            for (int j = 0; j < i; j++)
                sum += L[i][j] * U[j][k];
            U[i][k] = A[i][k] - sum;
        }
        for (int k = i; k < N; k++) {
            if (i == k)
                L[i][i] = 1.0;
            else {
                double sum = 0;
                for (int j = 0; j < i; j++)
                    sum += L[k][j] * U[j][i];
                L[k][i] = (A[k][i] - sum) / U[i][i];
            }
        }
    }
}

int mainf() {
    double A[N][N] = {0};

    // Generate tridiagonal SPD matrix
    for (int i = 0; i < N; i++) {
        A[i][i] = 2.0; // main diagonal
        if (i > 0)     A[i][i - 1] = -1.0; // lower diagonal
        if (i < N - 1) A[i][i + 1] = -1.0; // upper diagonal
    }

    double L[N][N] = {0};
    double U[N][N] = {0};

    lu_decomposition(A, L, U);

    // print_matrix("A", A);
    // print_matrix("L", L);
    // print_matrix("U", U);

    SUCCESS();
    return 0;
}

TA_INVOKE_COMMAND_ENTRY_POINT_HEADER {
	TA_INVOKE_COMMAND_ENTRY_POINT_PREAMBLE
	mainf();
	TA_INVOKE_COMMAND_ENTRY_POINT_EPILOGUE
}
