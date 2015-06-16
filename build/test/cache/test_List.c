#include "unity.h"
#include "List.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_linked_list_return_5(void)

{

 LinkList* NewLink = malloc(sizeof(LinkList*));

 NewLink = createLinkedList();

 NewLink = addList(NewLink, 5, ((void *)0));

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((NewLink->head->value)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

 if ((((NewLink->head->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)20);;};

 printf("NewLink->head->value = %i \nNewLink->head->next = %i",NewLink->head->value, NewLink->head->next);

}

void test_linked_list_return_3(void)

{

 LinkList* NewLink = malloc(sizeof(LinkList*));

 NewLink = createLinkedList();

 NewLink = addList(NewLink, 3, ((void *)0));



 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((NewLink->head->value)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

 if ((((NewLink->head->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)30);;};

 printf("NewLink->head->value = %i \nNewLink->head->next = %i",NewLink->head->value, NewLink->head->next);

}
