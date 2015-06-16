#include "unity.h"
#include "List.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_linked_list(void)

{

 LinkList* NewLink = malloc(sizeof(LinkList*));

 NewLink = createLinkedList();

 NewLink = addList(NewLink, 5, ((void *)0));

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((NewLink->head->value)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

}
