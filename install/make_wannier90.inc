#=======================================
# WANNIER90 	
#=======================================

TOPDIR = /home/xingyu/espresso/qe-passCommunicator

F90=mpif90
FCOPTS=$(FFLAGS) -x f95-cpp-input 
LDOPTS= -g -pthread

LIBS =    -lmkl_gf_lp64  -lmkl_sequential -lmkl_core 
