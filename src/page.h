
struct ppage {
	struct ppage *next;
	struct ppage *prev;
	void *physical_addr;
	};

void init_pfa_list();
