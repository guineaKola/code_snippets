#include <stdio.h>
#include <string.h>

int main(void)
{
    //Buffer overflow by
    //http://www.thegeekstuff.com/2013/06/buffer-overflow/?utm_source=feedly
    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       // Now Give root or admin rights to user
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}
       
/*#include <stdio.h>
#include <string.h>

int main() {
    //Buffer overflow by
    //http://www.thegeekstuff.com/2013/06/buffer-overflow/?utm_source=feedly
    int BUFSIZE=15;
    char buff[BUFSIZE];
    int pass = 0;

    printf("\n Enter the password : \n");
    fgets(buff,BUFSIZE,stdin);

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       (( Now Give root or admin rights to user
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}*/
