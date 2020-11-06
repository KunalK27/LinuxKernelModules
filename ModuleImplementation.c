#include <linux/init.h>
#include <linux/module.h>


static int hello_init(void)
{
        Printk(KERN_ALERT “Hello World Program 19BCB0047\n”);
        return 0;
}

static void dummy_exit(void)
{
        Printk(KERN_ALERT “Good Bye! 19BCB0047\n”);
}

module_init(hello_init);
module_exit(hello_exit);

