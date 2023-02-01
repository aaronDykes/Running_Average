#include "depend.h"


static Queue    q;
static Bool     is_full();

static void     enqueue (int*),
                init (int*),
                destroy(),
                print_result(double, int);

