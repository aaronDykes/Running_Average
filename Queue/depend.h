#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define     EMPTY   0
#define     MAX     10



typedef enum 
{
    FALSE,
    TRUE
}
Bool;

struct queue
{
    int *data,
        head,
        tail;
} queue;

typedef struct queue Qu;
typedef Qu *Queue;

extern void run();




