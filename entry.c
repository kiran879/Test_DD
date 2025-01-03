#include"headers.h"
static int __init MyD1Entry(void)
{
	printk(KERN_INFO "Hello Kernel, let me keep you in mind\n");
	return 0;
}
module_init(MyD1Entry);

