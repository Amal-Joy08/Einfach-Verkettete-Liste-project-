#include "types.h"
#include <iostream>
#include <cstdlib>

ListElement* create_list_element(float data) {
    ListElement* new_element = (ListElement*)malloc(sizeof(ListElement));
    if (new_element != nullptr) {
        new_element->data = data;
        new_element->next = nullptr;
    }
    return new_element;
}
ListElement* appendElement(ListElement* head, float data) {
    //  neuen Listenelements
    ListElement* new_element = create_list_element(data);
    if (new_element == NULL) {
        return NULL; // Return NULL,
                    //falls die Speicherzuweisung fehlschlägt
    }

    // Falls die Liste leer ist (head == NULL),
    //wird das neue Element der Kopf
    if (head == NULL) {
        return new_element;
    }

    // Suchen des letzten Elements in der Liste
    ListElement* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Anhängen des neuen Elements ans Ende der Liste
    current->next = new_element;

    return new_element;

}
int length(ListElement* head) {
    int count = 0;
    ListElement* current = head;

    // Iterieren durch die Liste und die Elemente zählen
    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}
void removeElement(ListElement* element, ListElement* previous) {
    if (element == NULL) {
        return;
    }

    // Falls es ein vorheriges Element gibt, dessen next-Zeiger anpassen
    if (previous != NULL) {
        previous->next = element->next;
    }

    // Lösche das angegebene Element und alle Nachfolger
    ListElement* current = element;
    while (current != NULL) {
        ListElement* next = current->next;
        free(current);
        current = next;
    }
}
