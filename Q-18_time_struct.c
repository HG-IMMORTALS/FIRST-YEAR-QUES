#include <stdio.h>

struct time_struct {
    int hours;
    int minutes;
    int seconds;
};

void insert(struct time_struct *t) {
    printf("Enter hours: ");
    scanf("%d", &(t->hours));
    printf("Enter minutes: ");
    scanf("%d", &(t->minutes));
    printf("Enter seconds: ");
    scanf("%d", &(t->seconds));
}

void display(struct time_struct t) {
    printf("Time: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    struct time_struct time;

    insert(&time);
    display(time);

    return 0;
}

/*Output:
Enter hours: 16
Enter minutes: 40
Enter seconds: 56
Time: 16:40:56
*/