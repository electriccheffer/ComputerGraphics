OBJ_DIR = build
SRC_DIR = src
BIN_DIR = bin
LIB_DIR = lib
INC_DIR = include
TARGET = $(BIN_DIR)/Sirpinski
OBJS = $(OBJ_DIR)/GLFWFunctions.o
INCLUDE_HELPERS = -I/opt/homebrew/include -L/opt/homebrew/lib -lglfw -framework OpenGL

build: $(TARGET)
	make clean
run: 
	make build
	$(BIN_DIR)/Sirpinski

$(TARGET): $(OBJS)
	c++ -o $(BIN_DIR)/Sirpinski $(OBJS) $(INCLUDE_HELPERS) $(SRC_DIR)/SirpinskiGasket.cpp  

$(OBJS): $(LIB_DIR)/GLFWFunctions.cpp
	c++ -c -o $(OBJS) $(INCLUDE_HELPERS) $(LIB_DIR)/GLFWFunctions.cpp 

debug: 
	@echo $(LIB_DIR)/GLFWFunctions.cpp 

clean: 
	rm $(OBJS) 
