/* Status Register */
#define ADPI_STS_RDY           0x80

/* Mode Register */

#define ADPI_MODE_CONTINUOUS   0x0000
#define ADPI_MODE_SINGLE       0x2000
#define ADPI_MODE_IDLE         0x4000
#define ADPI_MODE_POWERDOWN    0x6000

#define ADPI_PSW_DSB           0x0000
#define ADPI_PSW_ENB           0x1000

#define ADPI_AMPCM_DSB         0x0000
#define ADPI_AMPCM_ENB         0x0200

#define ADPI_CLK_INT1          0x0000
#define ADPI_CLK_INT2          0x0040
#define ADPI_CLK_EXT1          0x0080
#define ADPI_CLK_EXT2          0x00c0

#define ADPI_CHOP_DSB          0x0010
#define ADPI_CHOP_ENB          0x0000

#define ADPI_RATE_500          0x0001
#define ADPI_RATE_250          0x0002
#define ADPI_RATE_125          0x0003
#define ADPI_RATE_62           0x0004
#define ADPI_RATE_50           0x0005
#define ADPI_RATE_39           0x0006
#define ADPI_RATE_33           0x0007
#define ADPI_RATE_19           0x0008
#define ADPI_RATE_17           0x0009
#define ADPI_RATE_16           0x000A
#define ADPI_RATE_12           0x000B
#define ADPI_RATE_10           0x000C
#define ADPI_RATE_8            0x000D
#define ADPI_RATE_6            0x000E
#define ADPI_RATE_4            0x000F

/* Config Register */
#define ADPI_VBIAS_DSB         0x0000
#define ADPI_VBIAS_AIN1        0x4000
#define ADPI_VBIAS_AIN2        0x8000
#define ADPI_VBIAS_AIN3        0xc000

#define ADPI_BO_DSB            0x0000
#define ADPI_BO_ENB            0x2000

#define ADPI_POLAR_BI          0x0000 
#define ADPI_POLAR_UNI         0x1000 

#define ADPI_BOOST_DSB         0x0000
#define ADPI_BOOST_ENB         0x0800

#define ADPI_GAIN_1            0x0000
#define ADPI_GAIN_2            0x0100
#define ADPI_GAIN_4            0x0200
#define ADPI_GAIN_8            0x0300
#define ADPI_GAIN_16           0x0400
#define ADPI_GAIN_32           0x0500
#define ADPI_GAIN_64           0x0600
#define ADPI_GAIN_128          0x0700

#define ADPI_REFSEL_EXT1       0x0000
#define ADPI_REFSEL_EXT2       0x0040
#define ADPI_REFSEL_INT        0x0080
#define ADPI_REFSEL_RSB        0x00c0

#define ADPI_REFDET_DSB        0x0000
#define ADPI_REFDET_ENB        0x0020

#define ADPI_BUF_DSB           0x0000
#define ADPI_BUF_ENB           0x0010

#define ADPI_CH_1              0x0000
#define ADPI_CH_2              0x0001
#define ADPI_CH_3              0x0002
#define ADPI_CH_4              0x0003
#define ADPI_CH_TEMP           0x0006

/* etc */
#define ADPI_BI_OFFSET         0x800000
#define ADPI_VREF              5000.0
