#include"headers.h"
static void __exit MyD1cleanup(void)
{
	printk(KERN_INFO "Bye Kernel, see you again\n");
}
module_exit(MyD1cleanup);

