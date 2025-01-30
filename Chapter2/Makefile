OBJ_DIR = build
SRC_DIR = src
BIN_DIR = bin
LIB_DIR = lib
TEST_DIR = test
INC_DIR = include
TEST_BUILD_DIR = test_build
TEST_BIN_DIR = test_bin

TARGET = $(BIN_DIR)/Sirpinski
TEST_TARGET = $(TEST_BIN_DIR)/Tests

INCLUDE_HELPERS = -I/opt/homebrew/include -L/opt/homebrew/lib -lglfw -framework OpenGL
TEST_INCLUDE_HELPERS = -std=c++17 -isystem /opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -pthread

OBJS = $(OBJ_DIR)/GLFWFunctions.o
TEST_SRC = $(TEST_DIR)/TrivialTest.cpp $(TEST_DIR)/vecTest.cpp
TEST_OBJS = $(TEST_BUILD_DIR)/TrivialTest.o

test: $(TEST_TARGET)
	make build
	$(TEST_TARGET)
	make test_clean

build: $(TARGET)

run: 
	make build
	c++ -o $(BIN_DIR)/Sirpinski $(OBJS) $(INCLUDE_HELPERS) $(SRC_DIR)/SirpinskiGasket.cpp  
	$(BIN_DIR)/Sirpinski
	make clean 

$(TARGET): $(OBJS)

$(OBJS): $(LIB_DIR)/GLFWFunctions.cpp
	c++ -c -o $(OBJS) $(INCLUDE_HELPERS) $(LIB_DIR)/GLFWFunctions.cpp 

$(TEST_TARGET): $(TEST_SRC)
	c++ -o $(TEST_TARGET) $(TEST_INCLUDE_HELPERS) $(INCLUDE_HELPERS) $(TEST_SRC) 

debug: 
	@echo $(LIB_DIR)/GLFWFunctions.cpp 

clean: 
	rm -f $(OBJS) 
	rm -f $(TARGET) 

test_clean: 
	make clean
	rm -f $(TEST_TARGET) 
