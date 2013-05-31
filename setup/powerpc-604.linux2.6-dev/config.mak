# Set target context
PROC		 = powerpc-604
OS           = linux
OS_REV		 = 2.6
SPECIAL		 = DEBUG

ifdef OSPL_OUTER_HOME
include $(OSPL_OUTER_HOME)/setup/powerpc-604.linux-default.mak
else
include $(OSPL_HOME)/setup/powerpc-604.linux-default.mak
endif

# Compiler flags
CFLAGS_OPT       = -O0
# -DE_DEBUG is needed to enable debugging info for the SACPP apis
CFLAGS_DEBUG     = -g -D_TYPECHECK_ -DE_DEBUG
JCFLAGS          = -g

#Csc compiler flags
CSFLAGS_DEBUG    = -define:DEBUG\;TRACE -debug+ -debug:full
