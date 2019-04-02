#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>
int cipher(char*plaintext);

int main()
    {
        char a;

        scanf("%c",&a);
        lowercase(&a);



return 0;
    }

int lowercase(char* plaintext)
    {

        for (int b = 0; b < strlen(plaintext); b++)//making key in lower case
        {
            if (isupper(*(plaintext+b)))
            {
                *(plaintext+b) = ((int)*(plaintext+b) + 32);
            }
                printf("%c",*(plaintext+b));
        }
            printf("\n");
            return(1);

}
