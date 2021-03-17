extern int __end;
#include "page.h"
#include "list.h"
#define NPAGES 128
#define NULL (void*)0

struct ppage physical_page_array[NPAGES]; // 128 pages, each 2mb in l covers 256 megs of memory
struct ppage* free_list = NULL;                    //pointer to the beginning of the free memory


void init_pfa_list(void) {
	void* address_p = 0x200000;

	int x;
	for (x=0; x<NPAGES; x++){
		listAdd(&free_list, (struct list_element*) &physical_page_array[x]);
		physical_page_array[x].physical_addr = address_p;
		address_p +=0x200000;
	}
}


struct ppage *allocate_physical_pages(unsigned int npages) {
	struct ppage* new_var = free_list;
	struct ppage* new_list = NULL;
	int x;
	for(x=0; x<npages; x++){
		listRemove(new_var);
		listAdd(&new_list, new_var);
	
	}
		return (new_list);
}
void free_physical_pages(struct ppage *ppage_list){ // opposite of allocate

}	


