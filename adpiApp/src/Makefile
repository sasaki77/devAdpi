TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

PROD_IOC = adpi
# adpi.dbd will be created and installed
DBD += adpi.dbd

# adpi.dbd will be made up from these files:
adpi_DBD += base.dbd

# Include dbd files from all support applications:
#adpi_DBD += xxx.dbd
adpi_DBD += asyn.dbd
adpi_DBD += stream.dbd
adpi_DBD += drvAsynSPI.dbd

# Add all the support libraries needed by this IOC
#adpi_LIBS += xxx
adpi_LIBS += asyn
adpi_LIBS += stream
adpi_LIBS += drvAsynSPI

# adpi_registerRecordDeviceDriver.cpp derives from adpi.dbd
adpi_SRCS += adpi_registerRecordDeviceDriver.cpp

# Build the main IOC entry point on workstation OSs.
adpi_SRCS_DEFAULT += adpiMain.cpp
adpi_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#adpi_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# To build SNL programs, SNCSEQ must be defined
# in the <top>/configure/RELEASE file
ifneq ($(SNCSEQ),)
    # Build sncExample into exampleSupport
    sncAdpi_SNCFLAGS += +r
    adpi_DBD += sncAdpi.dbd
    # A .stt sequence program is *not* pre-processed:
    adpi_SRCS += sncAdpi.stt
    adpi_LIBS += seq pv

    # Build sncProgram as a standalone program
    #PROD_HOST += sncProgram
    #sncProgram_SNCFLAGS += +m
    # A .st sequence program *is* pre-processed:
    #sncProgram_SRCS += sncProgram.st
    #sncProgram_LIBS += seq pv
    #sncProgram_LIBS += $(EPICS_BASE_HOST_LIBS)
endif

# Finally link to the EPICS Base libraries
adpi_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

