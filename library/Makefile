TARGET := libicarithmetic.so

DEBUG_FLAGS := -O3
#DEBUG_FLAGS := -g -gz -ggdb
HEADER_FLAGS := -MD -MF $*.d -MP 

all: $(TARGET)

include make.src.list

OBJ_CPP := $(SRC_CPP:.cpp=.cpp.o)
DEP_CPP := $(SRC_CPP:.cpp=.cpp.d)

OBJ_CU  := $(SRC_CU:.cu=.cu.o) 
DEP_CU  := $(SRC_CU:.cu=.cu.d)

CPP_FLAGS := $(DEBUG_FLAGS) -fPIC -fvisibility=hidden -fvisibility-inlines-hidden -Wno-unused-result -Werror=vla
INC_CPP   := -I./include/internal
LD_FLAGS  := -L/usr/local/cuda/lib64 -lcudart -lcudadevrt

# -Werror=vla -fvisibility=hidden -fvisibility-inlines-hidden  -Wno-unused-result
CU_FLAGS := -Xcompiler -fPIC 
INC_CU   :=
GPU_ARCH ?= -arch=sm_70
#CPP compiler
CXX := g++
#device code compiler
DXX := nvcc

-include $(DEP_CPP)
-include $(DEP_CU)

%.cpp.o: %.cpp
	$(CXX) $(CPP_FLAGS) $(INC_CPP) $< -c -o $@ -MMD -MF $*.cpp.d -MP 

#-MMD --generate-nonsystem-dependencies-with-compile 
#-MF --dependency-output
#-MP --generate-dependency-targets  
%.cu.o: %.cu
	$(DXX) $(CU_FLAGS) $(INC_CU) $< -c -o $@ -MMD -MF $*.cu.d -MP
	
#--generate-nonsystem-dependencies-with-compile --dependency-output $*.cu.d --generate-dependency-targets

# -MD -MF $*.cu.d -MP

dev/icSvectorAdd_link.cu.o: dev/icSvectorAdd.cu.o
	nvcc -Xcompiler -fPIC $(GPU_ARCH) -dlink -o $@ $< $(LD_FLAGS)

$(TARGET): $(OBJ_CPP) $(OBJ_CU) dev/icSvectorAdd_link.cu.o
	$(CXX) -shared $^ -o $@


.PHONY: clean
clean:
	rm -rf $(OBJ_CPP) $(OBJ_CU) $(TARGET) $(DEP_CPP) $(DEP_CU) dev/icSvectorAdd_link.cu.o

#$(SRC_C:.c=.d)

