#
# Makefile for the MSM specific security device drivers.
#

ccflags-y += -Isecurity/selinux -Isecurity/selinux/include
ccflags-y += -Ifs/ext4
ccflags-y += -Ifs/f2fs
ccflags-y += -Ifs/crypto

obj-$(CONFIG_PFT) += pft.o
obj-$(CONFIG_PFK) += pfk.o pfk_kc.o pfk_ice.o pfk_ext4.o pfk_f2fs.o
