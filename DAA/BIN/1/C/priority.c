#include<stdio.h>
#include<limits.h>

#define MAX 50

struct Process {
    int process_id;
    int arrival_time;
    int burst_time;
    int priority;
    int waiting_time;
    int turnaround_time;
};

void findHighestPriority(struct Process P[], int n, int currentTime, int *highestPriorityIndex) {
    int highestPriority = INT_MAX;
    *highestPriorityIndex = -1;

    for (int i = 0; i < n; i++) {
        if (P[i].arrival_time <= currentTime && P[i].priority < highestPriority && P[i].burst_time > 0) {
            highestPriority = P[i].priority;
            *highestPriorityIndex = i;
        }
    }
}

int main() {
    struct Process P1[MAX];
    int n, currentTime = 0, completedProcesses = 0;
    float avg_waiting_time = 0, avg_turnaround_time = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter PID, Arrival time, Burst Time, and Priority for process %d: ", i + 1);
        scanf("%d %d %d %d", &P1[i].process_id, &P1[i].arrival_time, &P1[i].burst_time, &P1[i].priority);
        P1[i].waiting_time = 0;
        P1[i].turnaround_time = 0;
    }

    printf("\nProcess Table:\n");
    printf("PID  | Arrival Time | Burst Time | Priority | Waiting Time | Turnaround Time\n");

    while (completedProcesses < n) {
        int highestPriorityIndex;
        findHighestPriority(P1, n, currentTime, &highestPriorityIndex);

        if (highestPriorityIndex == -1) {
            currentTime++;
            continue;  // No process is available to execute at the moment
        }

        P1[highestPriorityIndex].burst_time -= 1;

        if (P1[highestPriorityIndex].burst_time == 0) {
            completedProcesses++;
            P1[highestPriorityIndex].turnaround_time = currentTime + 1 - P1[highestPriorityIndex].arrival_time;
            P1[highestPriorityIndex].waiting_time = P1[highestPriorityIndex].turnaround_time - P1[highestPriorityIndex].burst_time;
        }

        currentTime++;
    }

    for (int i = 0; i < n; i++) {
        printf("%-4d | %-13d | %-11d | %-8d | %-13d | %-15d\n", P1[i].process_id, P1[i].arrival_time, P1[i].burst_time, P1[i].priority, P1[i].waiting_time, P1[i].turnaround_time);
        avg_waiting_time += P1[i].waiting_time;
        avg_turnaround_time += P1[i].turnaround_time;
    }

    avg_waiting_time /= n;
    avg_turnaround_time /= n;
    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}
