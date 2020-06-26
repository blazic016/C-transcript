#include <stdio.h> 
#include <time.h>



char *get_date_time () {
    time_t now;
    struct tm *ptr_time;
    char *buf_time;
    time(&now);
    ptr_time = localtime(&now);
    strftime(buf_time, 18, "%x %X", ptr_time);
    return buf_time;
}


int main() {

    char* cur_time = get_date_time();
    printf("%s\n", cur_time);

    return 0;
}

