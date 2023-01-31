#include "circle.h"


void run()
{
    q               = malloc(sizeof(Qu));
    q->data         = malloc(sizeof(int) * MAX);
    int     run_ave = EMPTY,
            n       = EMPTY,
            old     = EMPTY;
    double  sum     = EMPTY;
    
    init(&n);

    while (1) {
        enqueue(&old);
        sum         +=  *(q->data + ((q->head - 1)%MAX));
        run_ave     =   (q->head > n) ? n : q->head;
        if (q->head >   n)
            sum     -=  *(q->data + ((old++)%MAX));
        print_result(sum, run_ave);
    }
    destroy();
}


static void init(int *n)
{
    printf("\nEnter a number you'd like to average over: ");
    scanf("%d", n); 
    q->head = EMPTY;
    q->tail = EMPTY;
}
static void destroy()
{
    free(q->data);
    free(q);
}


static void print_result(double sum, int run_ave)
{
    printf("\nBuffer contents:\n");
    for (int i = 0; i < MAX; i++)
        printf("%d ", *(int*)(q->data + i));
    printf("\n\nAveraged over: %d, Average: %lf\n\n", q->head, sum / run_ave);
}
static void enqueue(int *old)
{
    printf("\nEnter a number into the buffer: ");
    scanf("%d", (q->data + ((q->head++)%MAX)));
    if (is_full()) 
    {
        q->tail++;
        old++; 
    }
}


static Bool is_full() 
{
    return ((Bool) (q->head == MAX - 1));
}

