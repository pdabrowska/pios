


struct list_element{
	 struct list_element *next;
	 struct list_element *prev;

 };


void listAdd(struct list_element **head, struct list_element *new_element);
void listRemove(struct list_element *b);



