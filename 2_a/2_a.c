//Name:Arun
//CED17I009


#include<linux/module.h>

static int var =1;
module_param(var,int,0);

int init_module(void)
{
	printk("count = %d\n",var);
	return 0;
}
void cleanup_module(void)
{
	printk("Module removed");
}

MODULE_LICENSE("GPL");
