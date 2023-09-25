# CFA240400E1-030TC/CFA240400E1-030TN

Code for the Crystalfontz [CFA240400E1-030TC](https://www.crystalfontz.com/product/CFA240400E1030TC) and [CFA240400E1-030TN](https://www.crystalfontz.com/product/CFA240400E1030TN).  
These displays are 3.0in 240x400 TFTs.  

Example Seeeduino (Arduino clone) software.   
  
Kits for these products can be found here:  
https://www.crystalfontz.com/product/CFA240400E1030TCKIT
https://www.crystalfontz.com/product/CFA240400E1030TNKIT

## Navigating the Code

To toggle on or off different demonstrations, some defines in "CFA10097_defines.h" can be changed.

```c++
#define BMP_DEMO             (0)  
#define   BMP_SCROLL         (0)  
#define SOUND_DEMO           (0)  
#define   SOUND_VOICE        (0)  
#define   SOUND_PLAY_TIMES   (10)
#define LOGO_DEMO            (1)  
#define   LOGO_PNG_0_ARGB2_1 (1)  
#define BOUNCE_DEMO          (1)  
#define MARBLE_DEMO          (0)  
#define TOUCH_DEMO           (0)
```

`BMP_DEMO` - Toggled to 1 will look to the uSD card to pull the "SPLASH.RAW" file and display it\
`BMP_SCROLL` - Toggled to 1 will look to the uSD card to pull the "CLOUDS.RAW" file and display it scrolling accross the screen\
`LOGO_DEMO` - Toggled to 1 will display the Crystalfontz Logo from flash\
`BOUNCE_DEMO` - Toggled to 1 will show a ball bouncing around the screen\
`MARBLE_DEMO` - Toggled to 1 will look in the uSD card and pull "BLUEMARB.RAW" and demonstrate the earth rotating and bouncing around in screen in place of the ball\
`TOUCH_DEMO` - Toggled to 1 will enable the touch screen (only compatible on touch versions of the display)\

For an in-depth guide to loading custom images on our EVE lineup of displays, please refer to our blog post [available here](https://www.crystalfontz.com/blog/custom-images-on-eve-displays/).

## Connection Details
#### To [CFA10098 Adapter Board](https://www.crystalfontz.com/product/cfa10098-eve-breakout-board) (See kits above)
| 10098 Pin         | Seeeduino Pin| Connection Description |
|-------------------|--------------|------------------------|
| 1  (3v3)          | 3v3          | +3.3V Power            |
| 2  (GND)          | GND          | Ground                 |
| 3  (SCK)          | D13          | Serial Clock           |
| 4  (MOSI/D0)      | D11          | MOSI/D0                |
| 5  (MISO/D1)      | D12          | MISO/D1                |
| 6  (GPIO0/D2)     | DNC          | GPIO0/D2               |
| 7  (GPIO1/D3)     | DNC          | GPIO1/D2               |
| 8  (GND)          | GND or DNC   | Ground                 |
| 9  (CS)           | D9           | Chip Select            |
| 10 (INT)          | D7           | Interupt               |
| 11 (PD)           | D8           | Chip Power Down        |
| 12 (MODE/GPIO2)   | DNC          | MODE/GPIO2             |
| 13 (AUDIO)        | DNC          | Audio PWM              |
| 14 (GND)          | GND or DNC   | Ground                 |


#### To Optional [uSD Adapter Board](https://www.crystalfontz.com/product/cfa10112-sd-card-reader)
| microSD Pin | Seeeduino Pin| Connection Description |
|-------------|--------------|------------------------|
| 1 (CS)      | D10          | SD CS                  |
| 2 (DI)      | D11          | SD MOSI                |
| 3 (DO)      | D12          | SD MISO                |
| 4 (VDD)     | 3v3          | +3.3V Power            |
| 5 (SCLK)    | D13          | SD SCLK                |
| 6 (VSS)     | GND          | Ground                 |
