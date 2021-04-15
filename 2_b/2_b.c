//Name:B.Arun Kumar
//Roll:CED17I009


#include<linux/module.h>

static char *myname = "Arun"; //inserting name here

//initialising module here
int init_module(void)
{
	printk("Hello %s\n",myname); 
	return 0;
}
void cleanup_module(void)
{
	printk("Module removed");
}
MODULE_LICENSE("GPL");
