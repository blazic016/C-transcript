#include <stdio.h>
#include <time.h>

int main() {
    time_t start, finish;
    double duration;

    start = time(0);

    printf("Program radi bilo sta.");

    finish = time(0);
    
    duration = difftime(finish, start);
    printf("\nProgram se izvrsio za %f sekundi.",duration);

}