
CXX = g++

GTEST_HOME = ../../googletest-release-1.10.0/googletest
INC = -I $(GTEST_HOME) -I $(GTEST_HOME)/include -I . -I ../src -I ../../class-library/include -I ../src/_model

LDLIBS = $(GTEST_HOME)/lib/libgtest.a 
LDFLAGS = 
CXXFLAGS = -std=gnu++17 -pthread

TARGET = stats_app

BUILD_DIR = ./build
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS = $(OBJ:%.o=%.d)

$(TARGET) : $(BUILD_DIR)/$(TARGET)

$(BUILD_DIR)/$(TARGET) : $(OBJ)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)

-include $(DEPS)

$(BUILD_DIR)/%.o : %.cpp
	mkdir -p $(@D)
	$(CXX) -static $(CXXFLAGS) -MMD -c $< -o $@ $(INC)

.PHONY: all clean tests

all: clean $(TARGET)

clean:
	rm -fr $(BUILD_DIR)

tests: $(TARGET)
	$(BUILD_DIR)/$(TARGET)
