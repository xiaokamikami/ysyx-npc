ifdef CONFIG_ITRACE
CXXSRC = csrc/main.cpp
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)

endif
