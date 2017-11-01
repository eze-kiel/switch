#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

int main() {
    signed short var, i;
    bool do_quit = FALSE;
    
    while (! do_quit) {       
        printf("choisis la langue:\n1: anglais\n2: français\n");
        fflush(stdin);
        scanf("%hd", &var);
        do_quit = FALSE;
        switch(var) {
            case 1:
                printf("tu as choisi anglais\n");
                break;
            case 2:
                printf("tu as choisi francais\n");
                break;
            default:
                printf("fermeture du programme...\n");
                do_quit = TRUE;
                break;
        }
    }

    return 0;
}
