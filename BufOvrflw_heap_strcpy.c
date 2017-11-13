#define BUFSIZE 128

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Funktioniert noch nicht :-(
    
    char *s = "alter was geht ab";
    printf("%s\n",copy_string(s));
    
    return 0;
}

char * copy_string(const char *s)
{
    char * buf = malloc(BUFSIZE); // Annahme: Längere Strings kommen niemals vor

    if (buf)
        strcpy(buf, s); // Heap-Überlauf, falls strlen(s) > 127

    return buf;
}
