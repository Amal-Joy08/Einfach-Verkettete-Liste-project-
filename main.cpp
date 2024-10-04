#include <iostream>
#include "types.h"

using namespace std;

int main()
{
    ListElement* first = NULL;

    // F�gen Sie Elemente zur Liste hinzu
    first = appendElement(first, 3.14);  // Erster Wert
    ListElement* second = appendElement(first, 2.71);  // Zweiter Wert
    appendElement(first, 1.41);  // Dritter Wert

    // Ausgabe der Liste vor dem Entfernen
    printf("Liste vor dem Entfernen:\n");
    ListElement* current = first;
    while (current != NULL) {
        printf("%.2f\n", current->data);
        current = current->next;
    }

    // L�nge der Liste vor dem Entfernen
    printf("\nL�nge der Liste vor dem Entfernen: %d\n", length(first));

    // Entferne das zweite Element und alle Nachfolger
    printf("\nEntferne das zweite Element und alle Nachfolger...\n");
    removeElement(second, first);

    // Ausgabe der Liste nach dem Entfernen
    printf("\nListe nach dem Entfernen:\n");
    current = first;
    while (current != NULL) {
        printf("%.2f\n", current->data);
        current = current->next;
    }

    // L�nge der Liste nach dem Entfernen
    printf("\nL�nge der Liste nach dem Entfernen: %d\n", length(first));

    // Freigeben des zugewiesenen Speichers f�r das verbleibende Element
    removeElement(first, NULL);
}
