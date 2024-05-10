CC = g++
CFLAGS = -std=c++11 -Wall
SRC_DIR = personClasses
OBJ_DIR = obj
BIN_DIR = bin

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp) $(wildcard *.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(filter %.cpp,$(SRC_FILES)))

.PHONY: all clean

all: $(BIN_DIR)/main

$(info OBJ_FILES: $(OBJ_FILES))

$(BIN_DIR)/main: $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR) $(BIN_DIR)
