#include<linux/init.h>
#include<linux/module.h>
static int Add(int a,int b);
int Add(int a,int b)
{
        printk("in add_symbol function\n");
        return(a+b);
}

static int __init addfunction_init(void)
{
	printk("add_init:in init function\n");
	return 0;
}
static void __exit addfunction_exit(void)
{
	printk("code finished\n");
	printk("ok bye\n");
}
module_init(addfunction_init);
module_exit(addfunction_exit);
EXPORT_SYMBOL(Add);


