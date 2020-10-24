#include <stdlib.h>
#include <stdio.h>
#include "chained_list.h"

LIST newList()
{
	return malloc(sizeof(LIST));
}

LIST newElem(int val)
{
	LIST elem = newList();
	elem->val = val;
	return elem;
}

