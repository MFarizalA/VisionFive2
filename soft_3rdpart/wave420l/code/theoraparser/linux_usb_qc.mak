#Generated by VisualGDB (http://visualgdb.com)
#DO NOT EDIT THIS FILE MANUALLY UNLESS YOU ABSOLUTELY NEED TO
#USE VISUALGDB PROJECT PROPERTIES DIALOG INSTEAD

BINARYDIR := linux_usb_qc

#Toolchain
CC := gcc
CXX := g++
LD := $(CXX)
AR := ar
OBJCOPY := objcopy

#Additional flags
PREPROCESSOR_MACROS :=
INCLUDE_DIRS :=./include
LIBRARY_DIRS :=
LIBRARY_NAMES :=
ADDITIONAL_LINKER_INPUTS :=
MACOS_FRAMEWORKS :=

CFLAGS := -m32 -ggdb -ffunction-sections
CXXFLAGS := -m32 -ggdb -ffunction-sections
ASFLAGS :=
LDFLAGS := -m32 -Wl,-gc-sections
COMMONFLAGS :=

START_GROUP := -Wl,--start-group
END_GROUP := -Wl,--end-group

#Additional options detected from testing the toolchain
IS_LINUX_PROJECT := 1
