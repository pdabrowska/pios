
void putc(int data){
	int *mu_io = 0xFE215004;
	*mu_io = data;
}
void esp_printf(){

}
