trunk_path = $(shell pwd | sed "s/\/app.*//")
include $(trunk_path)/app/applib.rules

INC := $(INC) $(COMMON_INC) $(KERNEL_INC)
LINK := $(LINK) $(COMMON_LIB) $(KERNEL_LIB)

TARGET_DIR_NAME=platform

include $(trunk_path)/app/applib.mk
