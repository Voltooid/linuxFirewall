#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void){
    printk(KERN_INFO "Firewall Start!\n");
}

void cleanup_module(void){
    printk(KERN_INFO "Firewall closed!\n");
}
