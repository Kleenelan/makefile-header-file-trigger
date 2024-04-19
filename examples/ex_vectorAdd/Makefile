
INC      := -I../../library/include -I/usr/local/cuda/include
LD_FLAGS := -L../../library -licarithmetic -L/usr/local/cuda/lib64 -lcudart -lm

vectorAdd: vectorAdd.cpp
	g++ $< -o $@ $(INC) $(LD_FLAGS)

.PHONY: clean
clean:
	rm -rf vectorAdd
