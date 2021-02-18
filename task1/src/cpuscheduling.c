#include <stdio.h>
#include <stdlib.h>
void FCFCSscheduling();

int main()
{
    FCFSscheduling();
    return 0;
}

void FCFSscheduling()
{
    int n, i, j; //n-NUmber processes i & j are counters
    printf("Enter number of processes: ");
    scanf("%d", &n);//variable number of processes
    float brustTime[n],
          waitTime[n],
          turnAroundTime[n],
          averageWaitTime = 0,
          averageTurnAroundTime=0;

    //reading burst time
    printf("\nEnter Process Burst Time\n");
    for(i = 0; i < n; i++)
    {
        printf("Process #%d", i+1);
        scanf("%f", &brustTime[i]);
    }      
    waitTime[0] = 0; // first process wait time
    for(i = 1; i<n; i++)
    {
        waitTime[i] = 0;
        for(j=0; j<i; j++)
        {
            waitTime[i] += brustTime[j];
        }    
    }

    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

    for(i=0; i<n; i++)
    {
        turnAroundTime[i] = brustTime[i]+waitTime[i];
        averageWaitTime += waitTime[i];
        averageTurnAroundTime+=turnAroundTime[i];
        printf("\n%d\t\t%5.2f\t\t%5.2f\t\t%5.2f",
        i+1, brustTime[i], waitTime[i], turnAroundTime[i]);
    }

    averageWaitTime/=i;
    averageTurnAroundTime/=i;
    printf("\n\nAverage Waiting Time:%5.2f", averageWaitTime);
    printf("\nAverage TurnaroundTIme:%5.2f", averageTurnAroundTime);
}