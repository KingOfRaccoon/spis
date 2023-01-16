#include <iostream>
#include "modSp.h"

using namespace std;

void obrabotka(list **start, list **end) {
    list *first, *second;
    list *temp;
    if ((*start)->link->link) {
        first = *start;
        second = (*start)->link;
        *start = (*start)->link->link;
        if (first->data < second->data) {
            second->link = nullptr;
            (*end)->link = second;
            *end = second;

            first->link = nullptr;
            (*end)->link = first;
            *end = first;
        } else {
            first->link = nullptr;
            (*end)->link = first;
            *end = first;

            second->link = nullptr;
            (*end)->link = second;
            *end = second;
        }
    } else {
        if ((*start)->data < (*start)->link->data){
            temp = *end;
            *end = *start;
            *start = temp;
            (*start)->link = *end;
            (*end)->link = nullptr;
        }
    }
}

void view_spis(list *tec) {
    do {
        cout << tec->data;
        tec = tec->link;
    } while (tec);
}

void add_spis(telem ch, list **first, list **end) {
    list *nov = new list;
    nov->data = ch;
    nov->link = nullptr;
    if (*first)
        (*end)->link = nov;
    else *first = nov;
    *end = nov;
}

void init_spis(list **first, list **end) {
    *first = *end = nullptr;
}

void udal_spis(list **first, list **end) {
    list *tec;
    while (*first) {
        tec = *first;
        *first = (*first)->link;

        delete tec;
    }
    *end = nullptr;
}

