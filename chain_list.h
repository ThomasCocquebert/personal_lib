struct simple_chain_list
{
	int val;
	struct simple_chain_list *next;
};
typedef struct simple_chain_list *SLIST;

struct double_chain_list
{
	int val;
	struct double_chain_list *next;
	struct double_chain_list *prev;
};
typedef struct double_chain_list *DLIST;