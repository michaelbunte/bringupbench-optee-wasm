#include <tee_internal_api.h>
#include <tee_internal_api_extensions.h>
#include <tee_c_test.h>
#include "common/libmin.h"

TA_CREATE_ENTRY_POINT
TA_DESTROY_ENTRY_POINT
TA_OPEN_SESSION_ENTRY_POINT
TA_CLOSE_SESSION_ENTRY_POINT

#define DATASET_SIZE 256
int data[DATASET_SIZE];

// total swaps executed so far
unsigned long swaps = 0;

void print_data(int *data, unsigned size)
{
  libmin_printf("DATA DUMP:\n");
  for (unsigned i=0; i < size; i++)
    libmin_printf("  data[%u] = %d\n", i, data[i]);
}

void bubblesort(int *data, unsigned size)
{
  for (unsigned i=0; i < size-1; i++)
  {
    int swapped = FALSE;
    for (unsigned j=0; j < size-1; j++)
    {
      if (data[j] > data[j+1])
      {
        int tmp = data[j];
        data[j] = data[j+1];
		
        data[j+1] = tmp;
        swapped = TRUE;
        swaps++;
      }
    }
    // done?
    if (!swapped)
      break;
  }
}

int mainf() {
  // initialize the pseudo-RNG
  libmin_srand(42);
  // mysrand(time(NULL));

  // initialize the array to sort
  for (unsigned i=0; i < DATASET_SIZE; i++)
    data[i] = libmin_rand();
  print_data(data, DATASET_SIZE);

  bubblesort(data, DATASET_SIZE);
  print_data(data, DATASET_SIZE);

  // check the array
  for (unsigned i=0; i < DATASET_SIZE-1; i++)
  {
    if (data[i] > data[i+1])
    {
      libmin_printf("ERROR: data is not properly sorted.\n");
      return -1;
    }
  }

  libmin_printf("INFO: %lu swaps executed.\n", swaps);
  libmin_printf("INFO: data is properly sorted.\n");

//   libmin_success();
  return 0;
}


TA_INVOKE_COMMAND_ENTRY_POINT_HEADER {
	TA_INVOKE_COMMAND_ENTRY_POINT_PREAMBLE
	mainf();
	TA_INVOKE_COMMAND_ENTRY_POINT_EPILOGUE
}
