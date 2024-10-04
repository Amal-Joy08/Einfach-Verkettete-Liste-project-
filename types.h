#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED
struct ListElement {
    float data;                 // Float im Listenelement
    ListElement* next;          // next pointer
};
ListElement* create_list_element(float data);
ListElement* appendElement(ListElement* head, float data);
int length(ListElement* head);
void removeElement(ListElement* element, ListElement* previous);


#endif // TYPES_H_INCLUDED
