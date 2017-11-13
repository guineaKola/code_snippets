#include <stdio.h>
#include <string.h>

int main() {
    const int BUFSIZE = 15;
    char buf[BUFSIZE];// = {0};     //Array mit "0" initialisieren (jedes Element Wert=0)
    
    //Funktioniert:
    //strcpy(buf,"Hallo");
    
    //Funktioniert NICHT:
    strcpy(buf,"Hallo, Wie geht es dir du Lusche!");
    
    //Alternative1
    //strncpy(buf,"Hallo, Wie geht es dir du Lusche!",BUFSIZE-1);
    
    printf("%s\n",buf);

    return 0;
}
