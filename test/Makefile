ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=out
endif

CC = cc
CFLAGS = -Wall -Werror -Wextra

unity_root = ../unity/
unity_src = $(unity_root)/src/
unity = $(unity_src)/unity.c

includes = -I ../includes -I $(unity_src)

TARGETS = testft_strcmp.$(TARGET_EXTENSION)

.PHONY: test
test: $(TARGETS)

testft_strcmp.$(TARGET_EXTENSION):
	$(CC) $(CFLAGS) $(unity) ../sources/ft_strcmp.c $(includes) testft_strcmp.c -o $@
	./$@

.PHONY: clean
clean:
	$(CLEANUP) $(TARGETS)
