
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int queue [MAX_SIZE];
int rear=-1;
void enqueue (int value)
{
    if(rear>=MAX_SIZE -1)
    {
        printf("Queue overflow!\n");
    }
    else{
        rear++;
        queue[rear]=value;
        printf("%d inserted into queue.\n",value);

    }
    int main()
    {
        enqueue(10);
        enqueue(20);
        

    }
}
