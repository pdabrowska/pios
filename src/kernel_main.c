//#include "mmusetup.S"
#include "serial.h"
#include "list.h"
#include "page.h"
void zero_bss();
extern int __bss_start;
extern int __bss_end;
int global;
#define NULL (void*)0
/*
struct list_element c = {NULL, NULL, 0}; // next ptr is NULL, end of list 
struct list_element b = {NULL, NULL, 1}; // next ptr points to c
struct list_element a = {NULL, NULL, 2}; // next ptr points to a
struct list_element *head = &a;
struct list_element* list = &a;
*/
	struct ppage* free_list = NULL;
	//int *mu_io = 0xFE215004;
	void kernel_main(){
		init_pfa_list();
		struct ppage* test = free_list;
		test = test->next;
		esp_printf(putc, "Physical Address is: %x\n", test->physical_addr);




		//mmu_on();

		//led_init();
	
	//*mu_io = 'p';
	//esp_printf(putc, "Current Execution Level is %d\r\n", kernel_main);

		while(1){
		/*	led_on();
			delay();
			led_off();
			delay(); */
		}
	}


	/*izero_bss();
	//list_add(list, &b);
	//list_add(list, &c);

	 list_remove(head);*/
	
void zero_bss(){

	int*begin_bss;
	begin_bss = &__bss_start;
	int i =0;

	while(&__bss_start + i != &__bss_end)
	{
		begin_bss[i] = 0;
		i++;
	}

}


