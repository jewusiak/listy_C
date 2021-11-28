#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item {
    char *linia;
    struct item *next;
} *list_t;

int main(int argc, char **argv) {
    list_t lista = NULL;
    struct item *act = malloc(sizeof(*act));
    for (int i = 1; i < argc; i++) {
        act = malloc(sizeof(lista));
        act->linia = malloc((strlen(argv[i]) + 1) * sizeof(char));
        act->linia = strdup(argv[i]);
        act->next=NULL;
        struct item *next = lista;
        if(lista==NULL)
            lista=act;
        else {
            while (next->next  != NULL)
                next=next->next;
            next->next = act;
        }
    }


    for (int i = 1; i < argc; i++) {

    }
    return 0;
}
