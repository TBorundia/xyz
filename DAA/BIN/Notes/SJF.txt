#include<stdio.h>
#define MAX 50

struct Process {
    int process_id;
    int arrival_time;
    int burst_time;
    int w_time;
    int t_time;
    int s_time;
};

int main() {
    struct Process P1[MAX];
    int n, i, j, temp, tt = 0, wt = 0, st = 0;
    float tt_avg = 0, wt_avg, st_avg;
    printf("Enter the number of processes");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter PID, Arrival time and burst Time");
        scanf("%d %d %d", &P1[i].process_id, &P1[i].arrival_time, &P1[i].burst_time);
        P1[i].t_time = 0;
        P1[i].s_time = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (P1[i].arrival_time > P1[j].arrival_time || (P1[i].arrival_time == P1[j].arrival_time && P1[i].burst_time > P1[j].burst_time)) {
                temp = P1[i].arrival_time;
                P1[i].arrival_time = P1[j].arrival_time;
                P1[j].arrival_time = temp;

                temp = P1[i].process_id;
                P1[i].process_id = P1[j].process_id;
                P1[j].process_id = temp;

                temp = P1[i].burst_time;
                P1[i].burst_time = P1[j].burst_time;
                P1[j].burst_time = temp;
            }
        }
    }

    P1[0].s_time = 0;
    for (i = 1; i < n; i++) {
        P1[i].s_time = P1[i - 1].s_time + P1[i - 1].burst_time;
    }

    for (i = 0; i < n; i++) {
        P1[i].w_time = P1[i].s_time - P1[i].arrival_time;
        P1[i].t_time = P1[i].w_time + P1[i].burst_time;
    }

    for (i = 0; i < n; i++) {
        tt += P1[i].t_time;
        wt += P1[i].w_time;
        st += P1[i].s_time;
    }

    tt_avg = tt / (n * 1.0);
    wt_avg = wt / (n * 1.0);
    st_avg = st / (n * 1.0);

    printf("PId \t  AT \t BT \t WT  \t TT \t ST\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t  %d \t  %d \t%d \t %d \t %d\n", P1[i].process_id, P1[i].arrival_time, P1[i].burst_time, P1[i].w_time, P1[i].t_time, P1[i].s_time);
    }

    printf("\n\n");
    printf("Average TT time %f\n", tt_avg);
    printf("Average Waiting time %f\n", wt_avg);

    return 0;
}
