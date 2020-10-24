//Strctures of chained list

/*
* Strcuture LIST
* /!\ LIST IS A POINTER
* int val : the integer to stored in the list
* LIST next : the address of the next elem
*/
struct chained_list
{
	int val;
	struct chained_list next;
};
typedef struct chained_list *LIST;

/*
* Return an empty list
*/
LIST newList();