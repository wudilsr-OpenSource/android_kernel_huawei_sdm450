ccflags-y += -I$(src)			# needed for trace events

obj-y					+= ion/
obj-$(CONFIG_FIQ_DEBUGGER)		+= fiq_debugger/

obj-$(CONFIG_ASHMEM)			+= ashmem.o
obj-$(CONFIG_ANDROID_LOW_MEMORY_KILLER)	+= lowmemorykiller.o
obj-$(CONFIG_HUAWEI_LMK_DBG)		+= lowmem_dbg.o
obj-$(CONFIG_HUAWEI_RCC)        += rcc.o
obj-$(CONFIG_HW_LOGGER)                        += hwlogger/
obj-$(CONFIG_HISI_SMART_RECLAIM)+= smart_reclaim.o
