#include <stdio.h>
#include <string.h>

int main()
{
    char getZiffer(int wert)
    {
        if(wert>9) {
            
        return (char)(wert-10+'A');
        }
        else {
            return (char)(wert+'0');
        }
    }
    
    int getWert(char ziffer)
    {
        if(ziffer>='A')
        {
            return (int)(ziffer-'A'+10);
        }
        else {
            return (int)(ziffer-'0');
        }
    }
}

/*
Optionen um Strings aneinander zu reihen
strcat(char *a, char *b) ... hängt string b an string a an
strncat(char *a, char *b, int n) ... hängt n Zeichen von b an string an
strcpy(char *a, char *b) ... kopiert string b auf string a 
strncpy(char *a, char *b, int n) kopiert n Zeichen von b auf a 

string in C sind 0-terminiert:
char text[] = "hallo"; ... folgt einen string der Länge 6 an
     text[0] = 'h';        (das Ende Zeichen wird automatisch angehängt)
     text[4] = 'o';
     text[5] = '\0';
*\
