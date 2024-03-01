#include<stdio.h>
#include<string.h>
void time(char *s){
	int hour, minute, second;
	char meridiem[3];
	sscanf(s, "%d:%d:%d%s", &hour,&minute,&second, meridiem);
    if(strcmp(meridiem, "PM")==0 && hour !=12){
        hour += 12;
    } else if (strcmp(meridiem, "AM")==0 && hour == 12){
        hour = 0;
    }
    printf("%02d:%02d:%02d", hour, minute, second, meridiem);
}
int main (){
    char s[11];
    fgets(s, sizeof(s), stdin);
    time(s);
    return 0;
}