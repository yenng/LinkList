#ifndef List_H
#define List_H
typedef struct List{
	int value;
	struct List* next;
}List;
typedef struct{
	List* head;
	List* tail;
}LinkList;

List* createListElement(int value, List* next);
LinkList* createLinkedList();
LinkList* addList(LinkList* NewLink, int value, List* next);

#endif // List_H
