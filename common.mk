# General description:
#    This common.mk contains usefull rules for the project compilation. It's
# design to be reused in diffetent paths, with recursive make invocations.
# 
# Variables needed:
#    To work correctly two main variables are needed:
#       -> TARGET_DIR: This variable defines the location where all the
#                      generated files should go. If this variable is not
#                      setted, then any binary won't be generated.
#       -> SOURCES: This variable contains the path, separated by spaces, of all
#                   the sources to be compiled.
# 
# Variables used:
#    There are internal variables created, available to be used in parent
# makefile to control the build process:
#       -> OBJECTS: This variable contains the name, and path, of the object
#                   files to be created. Each source file will generate an object
#                   file in the TARGET_DIR, with same relative path.
#       -> TARGET_DIRS: This variable contain the paths, separated by spaces, of
#                       all OBJECTS. It's used to create needed the directory
#                       tree in the TARGET_DIR to avoid compilation errors
#                       (caused by missing directories).
# 
ifndef TARGET_DIR
$(error "Missing TARGET_DIR.")
endif
#################################################################################
#################### FUNCTIONS:
define getTargetDir
$(strip $(PROJECT_ROOT))$(strip $(TARGET_DIR))
endef
define print
@tput setaf 2;
@echo "$1";
@tput sgr 0;
endef
#################################################################################
#################### COMMON RULES:
.PHONY: clean
clean:
	rm -rf "$(call getTargetDir)"
	@echo "$(call getTargetDir) deleted."
#################################################################################
#################### COMPILATION FUNCTIONS:
define getObjFileNameFromSrc
$(addprefix $(call getTargetDir)/, $(patsubst %.cc, %.o, $1))
endef
#################################################################################
#################### COMPILATION AUTOGENERATED VARIABLES:
OBJECTS       = $(call getObjFileNameFromSrc,$(SOURCES))
TARGET_DIRS   = $(sort $(dir $(OBJECTS)))
-include $(OBJECTS:.o=.mk)
#################################################################################
#################### STATIC PATTERN RULES:
$(call getTargetDir)/%.o: %.cc | $(TARGET_DIRS)
	$(COMPILE.cc) -MM "$<" -MT "$@" -MF "$(@:.o=.mk)"
	$(COMPILE.cc) -o "$@" "$<"
#################################################################################
#################### DIRECTORY GENERATION RULES:
$(TARGET_DIRS): %:
	mkdir -p "$@"
#################################################################################
#################### RECURSIVE RULES:
define RECURSIVE_RULES
.PHONY: $1.%
$1.%:
	$(MAKE) -C $1 -I "../$(PROJECT_ROOT)" -e PROJECT_ROOT="../$(PROJECT_ROOT)" $$*
endef
$(foreach directory,$(RECURSIVE_SUBDIRS),$(eval $(call RECURSIVE_RULES,$(directory))))
