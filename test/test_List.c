#include "unity.h"
#include "List.h"
#include <stdlib.h>
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_linked_list_return_5(void)
{
	LinkList* NewLink =  malloc(sizeof(LinkList*));
	NewLink = createLinkedList();
	NewLink = addList(NewLink, 5, NULL);
	TEST_ASSERT_EQUAL(5,NewLink->head->value);
	TEST_ASSERT_NULL(NewLink->head->next);
	printf("NewLink->head->value = %i \nNewLink->head->next = %i",NewLink->head->value, NewLink->head->next);
}
void test_linked_list_return_3(void)
{
	LinkList* NewLink =  malloc(sizeof(LinkList*));
	NewLink = createLinkedList();
	NewLink = addList(NewLink, 3, NULL);
	//NewLink = addList(NewLink, 3, NULL);
	TEST_ASSERT_EQUAL(3,NewLink->head->value);
	TEST_ASSERT_NULL(NewLink->head->next);
	printf("NewLink->head->value = %i \nNewLink->head->next = %i",NewLink->head->value, NewLink->head->next);
}