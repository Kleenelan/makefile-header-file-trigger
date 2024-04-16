TARGET := libicarithmetic.so

DEBUG_FLAGS := -O3
HEADER_FLAGS := -MD -MF $*.d -MP 

all: $(TARGET)

SRC_C := \
	  	src/add.c \
	 	src/circ.c \
		src/div.c \
		src/mul.c \
		src/sub.c \
		src/util.c

OBJ_C := $(SRC_C:.c=.c.o)
DEP_C := $(SRC_C:.c=.d) 

CPP_FLAGS := $(DEBUG_FLAGS) -fPIC -fvisibility=hidden -fvisibility-inlines-hidden  -Wno-unused-result -Werror=vla
INC := -I./include/internal
LD_FLAGS := 

#CXX := gcc
-include $(DEP_C)
%.c.o: %.c
	$(CXX) $(CPP_FLAGS) $(INC) $< -c -o $@ -MD -MF $*.d -MP 

$(TARGET): $(OBJ_C)
	$(CXX) -shared $^ -o $@


.PHONY: clean
clean:
	rm -rf $(OBJ_C) $(TARGET) $(DEP_C)

#$(SRC_C:.c=.d)

