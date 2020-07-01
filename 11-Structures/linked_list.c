#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct data {
    char name[20];
    struct data *next;
};

// Definisanje typedef za strukturu i pokazvac na nju
typedef struct data PERSON;
typedef PERSON *LINK;

int main() {
    LINK head = NULL;
    LINK new = NULL;
    LINK current = NULL;

    /*Dodaj prvi elemenat liste. Ne predpostavljamo da je lista prazna, iako ce u ovom programu uvek biti. */
    new = (LINK)malloc(sizeof(PERSON));
    new->next = head;
    head = new;
    strcpy(new->name, "Abigail");

    /* Dodaj element na kraj liste. */
    current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    new = (LINK)malloc(sizeof(PERSON));
    current->next = new;
    new->next = NULL;
    strcpy(new->name, "Catherine");

    /* Dodaj drugi element na drugu poziciju u listi. */
    new = (LINK)malloc(sizeof(PERSON));
    new->next = head->next;
    head->next = new;
    strcpy(new->name, "Beatrice");

    /* Prikaz liste */
    current = head;
    while (current != NULL) {
        printf("\n%s", current->name);
        current = current->next;
        }
    printf("\n");

}

