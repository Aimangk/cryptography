#include <stdio.h>
#include <string.h>


int main()
{
    char message[]="11515195063862318899931685488813747395775516287289682636499965282714637259206269";
    char quotient[strlen(message)+1];
    int i=0;
    int reste = 0;
    while(message[i]!='\0')
    {
        int nombre = message[i] - '0';
        int temp = reste * 10 + nombre;
        reste = temp % 256;
        int _quotient = temp/256; 
        quotient[i]=_quotient + '0';
        i++;
        
    }
    quotient[i]='\0';

    return 0;
}