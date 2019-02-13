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
### Number of channels to use
dbpf ET_SASAKI:NUMCHS 4

### Gain setting. Available gain is following
### 1, 2, 4, 8, 16, 32, 64, 128
dbpf ET_SASAKI:SETGAIN 1

### Rate setting. Available rate is following
### 500, 250, 125, 62, 50, 39, 33, 19, 17, 16, 12, 10, 8 ,6, 4
dbpf ET_SASAKI:SETRATE 50

seq sncAdpi,"head=ET_SASAKI"
