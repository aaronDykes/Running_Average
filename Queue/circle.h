#include "depend.h"


static Queue q;


static Bool is_full(),
            is_empty();

static void enqueue (int*),
     init (int*),
     destroy(),
     print_result(double, int);

void run();
