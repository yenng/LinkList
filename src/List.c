#include "List.h"
#include <stdlib.h>
#include <stdio.h>

List* createListElement(int value, List* next){
	int IntElement = value;
	List* ListElement = malloc(sizeof(List*));
	
	ListElement->value = IntElement;
	ListElement->next = next;

	return ListElement;
}

LinkList* createLinkedList(){
	LinkList* NewLink = malloc(sizeof(LinkList*));
	
	NewLink->head = 0;
	NewLink->tail = 0;
	
	return NewLink;
}

LinkList* addList(LinkList* NewLink, int value, List* next){
	List* ListElement = malloc(sizeof(List));
	ListElement = createListElement(value,next);
	LinkList* baseLink = malloc(sizeof(LinkList));
	baseLink = createLinkedList();
	baseLink = NewLink;
	
	
		if (baseLink->head != NULL){
			while (baseLink->head != NULL){
				NewLink->tail = ListElement;
				NewLink->head->next = ListElement;
				baseLink->head = baseLink->head->next;
			}
		}
		else{
			NewLink->head = ListElement;
			NewLink->tail = ListElement;
		}
		
	
	return NewLink;
}