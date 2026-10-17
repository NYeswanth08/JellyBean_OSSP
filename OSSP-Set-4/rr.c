#include <stdio.h>

int main() {
    int n, b[20], r[20], w[20], t[20] = {0}, q;
    int i, time = 0, done;
    float at = 0, aw = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter burst time for P%d: ", i + 1);
        scanf("%d", &b[i]);
        r[i] = b[i];
    }

    printf("Enter time quantum: ");
    scanf("%d", &q);

    do {
        done = 1;
        for (i = 0; i < n; i++) {
            if (r[i] > 0) {
                done = 0;
                if (r[i] > q) {
                    time += q;
                    r[i] -= q;
                } else {
                    time += r[i];
                    t[i] = time;
                    r[i] = 0;
                }
            }
        }
    } while (done == 0);

    printf("\nP\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++) {
        w[i] = t[i] - b[i];
        at += t[i];
        aw += w[i];
        printf("P%d\t%d\t%d\t%d\t%d\n", i + 1, b[i], t[i], t[i], w[i]);
    }

    printf("\nAverage Turnaround Time = %.2f", at / n);
    printf("\nAverage Waiting Time = %.2f\n", aw / n);
    return 0;
}
