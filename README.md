# devAdpi

devAdpi is an EPICS device support for [ADPi](https://mechatrax.com/products/adpi/).

ADPi is Analog-to-Digital converter for Raspberry Pi developed by [MechaTracks Co., Ltd.](https://mechatrax.com/).

It is recommended that you install SPI software packages for ADPi.
See [here](https://github.com/mechatrax/adpipro) for more information on the SPI software packages.

## Dependencies
- EPICS base (> 3.14.12.5)
- [EPICS Sequencer](https://www-csr.bessy.de/control/SoftDist/sequencer/) (> 2.2)
- [asyn](https://github.com/epics-modules/asyn) (> 4-26)
- [StreamDevice](https://github.com/paulscherrerinstitute/StreamDevice) (Need a Patch for drvAsynSPI)
- [drvAsynSPI](https://github.com/kek-acc/drvAsynSPI)

## Example Usage
```bash
# Set number of channels to use
$ caput ET_SASAKI:NUMCHS 1
Old : ET_SASAKI:NUMCHS               4
New : ET_SASAKI:NUMCHS               1

# Set gain. Available gain is following
# Gain 1, 2, 4, 8, 16, 32, 64, 128
$ caput ET_SASAKI:SETGAIN1 "Gain 2"
Old : ET_SASAKI:SETGAIN1             Gain 1
New : ET_SASAKI:SETGAIN1             Gain 2

# Set rate. Available rate is following
# 500 Hz, 250, 125, 62, 50, 39, 33, 19, 17, 16, 12, 10, 8 ,6, 4
$ caput ET_SASAKI:SETRATE "250 Hz"
Old : ET_SASAKI:SETRATE              500 Hz
New : ET_SASAKI:SETRATE              250 Hz

# Enable temperature measurement
$ caput ET_SASAKI:DSBTEMP 0
Old : ET_SASAKI:DSBTEMP              Enable
New : ET_SASAKI:DSBTEMP              Enable

# Get a ch1 voltage
$ caget ET_SASAKI:V1
ET_SASAKI:V1                   1652.25

# Get a temperature value
$ caget ET_SASAKI:TEMP
ET_SASAKI:TEMP                 26.8382
```
