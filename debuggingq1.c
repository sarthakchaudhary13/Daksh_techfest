#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int plaintext(char*plaintext);

int main()
    {
        char a;

        scanf("%[^\n]s ",&a);
        plaintext(&a);



return 0;
    }

int plaintext(char* plaintext)
    {

        for (int b = 0; b < strlen(plaintext); b++)//making key in lower case
        {
            if (isupper(*(plaintext+b)))
            {
                *(plaintext+b) = ((int)*(plaintext+b) + 32);
            }
            printf("%c",*(plaintext+b));
        }

            return(1);

}
