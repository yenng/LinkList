#include "unity.h"
#include "List.h"
#include <stdlib.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_linked_list(void)
{
	LinkList* NewLink =  malloc(sizeof(LinkList*));
	NewLink = createLinkedList();
	NewLink = addList(NewLink, 5, NULL);
	TEST_ASSERT_EQUAL(5,NewLink->head->value);
}
