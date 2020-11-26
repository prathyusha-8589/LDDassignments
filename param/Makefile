	obj-m := param.o
	KERNELDIR = /lib/modules/$(shell uname -r)/build
	PWD :=$(shell pwd)
defualt:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) module_install
	depmod -a

