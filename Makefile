CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
BUILD    = build
TARGET   = $(BUILD)/kalkulator

all: $(TARGET)

$(TARGET): kalkulator.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(BUILD):
	mkdir -p $(BUILD)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD)

.PHONY: all run clean
