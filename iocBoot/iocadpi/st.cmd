#!../../bin/linux-arm/adpi

## You may have to change adpi to something else
## everywhere it appears in this file

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/adpi.dbd"
adpi_registerRecordDeviceDriver pdbbase

## Load record instances
#dbLoadRecords("db/xxx.db","user=pi")

epicsEnvSet("STREAM_PROTOCOL_PATH", "../../adpiApp/Db")
drvAsynSPIConfigure("P0", "/dev/spidev0.0", 3, 1000000, 1)
#asynSetTraceMask("P0", 0, -1)
#asynSetTraceIOMask("P0", 0, -1)

dbLoadRecords("db/adpi.db", "head=ET_SASAKI, port=P0")

cd "${TOP}/iocBoot/${IOC}"
iocInit

## Start any sequence programs
#seq sncxxx,"user=pi"

## Set sequence parameters
dbpf ET_SASAKI:NUMCHS 2

seq sncAdpi,"head=ET_SASAKI"
