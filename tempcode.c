#include <stdio.h>

int validate_date_string(char* s){
    int d,m,y;
    int daysinmonth[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int legit = 0;

    d = 10 * (s[0] - '0');
    d += (s[1] - '0');

    m = 10 * (s[3] - '0');
    m += (s[4] - '0');

    y = 1000 * (s[6] - '0');
    y += 100 * (s[7] - '0');
    y += 10 * (s[8] - '0');
    y += (s[9] - '0');

    if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) daysinmonth[1]=29;

    if(m < 1 || m > 12){
        return m;
    }

    m--;
    
    if(d >= 1 && d <= daysinmonth[m]){
        return 0;
    }
    return d;
}

int main()
{
    char s[10];
    gets(s);

    printf("%d", validate_date_string(s));
}