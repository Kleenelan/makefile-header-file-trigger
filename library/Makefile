TARGET := libicarithmetic.so

DEBUG_FLAGS := -O3
HEADER_FLAGS := -MD -MF $*.d -MP 

all: $(TARGET)

SRC_C := \
	  	src/add.c \
	 	src/circ.c \
		src/div.c \
		src/mul.c \
		src/sub.c

OBJ_C := $(SRC_C:.c=.c.o)

CPP_FLAGS := $(DEBUG_FLAGS) -fPIC
INC := -I./include/internal
LD_FLAGS := 

#CXX := gcc

%.c.o: %.c
	$(CXX) $(CPP_FLAGS) $< -c -o $@ $(INC)


$(TARGET): $(OBJ_C)
	$(CXX) -shared $^ -o $@


.PHONY: clean
clean:
	rm -rf $(OBJ_C) $(TARGET)
