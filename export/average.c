#include<linux/init.h>
#include<linux/module.h>
int average;
int test_a=20,test_b=40;
static int Add(int a,int b);
static int __init avg_init(void)
{
	printk("in avg_init module\n");
	printk("the module parameters are %d ,%d\n",test_a,test_b);
	average=Add(test_a,test_b)/2;
	printk("the average of two numbers is %d\n",average);
	return 0;
}
static void __exit avg_exit(void)
{
	printk("exiting avg_exit module\n");
	printk("bye bye\n");

}
module_init(avg_init);
module_exit(avg_exit);
module_param(test_a, int,S_IRUGO);
module_param(test_b, int,S_IRUGO);

