#include <stdio.h>
#include <string.h>

#define BUFSIZE 10

int main() {
    char buff[BUFSIZE];
    printf("Enter username (max 10 Zeichen):\n");
    fgets(buff,BUFSIZE,stdin);
    printf("\n\n");
    
    //Bei Eingabe von %d wird Stack ausgelesen
    //printf(buff);
    
    char out[BUFSIZE]=snprintf(buff,sizeof(buff),buff);
    printf("%s",out);
    

    return 0;
}
