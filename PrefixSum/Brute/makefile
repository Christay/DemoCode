TARGET_EXEC := PSum_BRUTE
BUILD_DIR := ./release
S_DIR := ./src

INC_DIR := $(shell find $(S_DIR) -type d)
I_FLAGS := $(addprefix -I,$(INC_DIR))
B_FLAGS := -MMD -MP
C_FLAGS := -Wall $(B_FLAGS) $(I_FLAGS)

SRCS := $(shell find $(S_DIR) -name '*.c' -or -name '*.cpp') 
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)


$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

#make the library files
$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(C_FLAGS) -c $< -o $@



.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)


-include $(DEPS)
