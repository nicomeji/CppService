.PHONY: compile package run debug-%
.DEFAULT_GOAL := package

#################################################################################
#################### COMPILATION CONSTANTS:
TARGET_DIR          = target
SOURCES             = $(shell find "src" -name "*.cc";)
RUNABLE_NAME        = testDesign
CPPFLAGS            = -I "inc"
CXXFLAGS            = -std=c++0x
CXX                 = g++
include common.mk
#################################################################################

compile: $(OBJECTS)

package: $(call getTargetDir)/$(RUNABLE_NAME) | compile

$(call getTargetDir)/$(RUNABLE_NAME): $(OBJECTS)
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

run: package
	./$(call getTargetDir)/$(RUNABLE_NAME)

debug-%:
	@echo '$*=$($*)'
