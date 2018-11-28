# wmt_arduino_study
My Arduino Uno study

## Arduino Playground  
* https://playground.arduino.cc/Main/InterfacingWithHardware  

## AVR Manual  
* http://www.nongnu.org/avr-libc/user-manual/index.html  

## BBS  
* http://bbs.elecfans.com  
* http://www.elecfans.com  
* http://www.firebbs.cn/forum.php  
* http://www.openedv.com  
* http://www.51hei.com/bbs/  
* http://bbs.21ic.com/iclist-27-1.html  
* https://bbs.csdn.net/forums/Embedded_SCM  
* http://www.stmcu.org.cn/module/forum/forum.php  
* https://www.amobbs.com/forum.php?gid=10  

## Ref  
* https://github.com/adafruit/Adafruit-GFX-Library  
* https://github.com/adafruit/Adafruit_SSD1306  
* https://github.com/Hyvok/SSD1306-display-driver-for-Arduino  

## RTOS  
* https://github.com/zephyrproject-rtos  
* https://github.com/PeterVranken/RTuinOS  
* https://www.rt-thread.org  

## Ser  
* https://github.com/0xE8551CCB/serial-assistant  
* https://github.com/charasyn/pc2snes  
* search baidupan serial-assistant  

## GUI
* https://github.com/achimdoebler/UGUI  

## stm32  
* https://github.com/FASTSHIFT/Arduino-For-Keil  

## Menu UI  
* https://github.com/Stan-Reifel/ArduinoUserInterface  
* https://github.com/Spirik/GEM  
* https://github.com/Jomelo/LCDMenuLib  
* https://github.com/Jomelo/LCDMenuLib2  

## Graphics  
* https://github.com/fabio914/arduinogl  

## 微雪_1.3inch_OLED_HAT  
http://www.waveshare.net/shop/1.3inch-OLED-HAT.htm  
http://www.waveshare.net/wiki/1.3inch_OLED_HAT  
http://www.waveshare.net/wiki/1.3inch_OLED_(A)  
search baidupan 1.3inch-OLED-Code.7z  
（LEFT border，RIGHT resistors，female headers face upon）  
HAT       =>  OLED =>  Arduino UNO  
RIGHT  1  ->  VCC  ->  3.3V  
RIGHT 20  ->  GND  ->  GND  
RIGHT 10  ->  DIN  ->  D11(MOSI)  
RIGHT 12  ->  CLK  ->  D13(SCK)  
LEFT  12  ->  CS   ->  D10  
LEFT   9  ->  D/C  ->  D8  
LEFT  11  ->  RES  ->  D9  

## altium designer  
todo  

## OLED drivers (see my baidupan)    
* ZHONGBEST OLED 12864, i2c, 4 pins, ssd1306  
for Arduino  
https://gitee.com/weimingtom/arduboymod/blob/master/Adafruit_SSD1306.h  
(baidupan) search ssd1306_128x32_i2c.ino  
(baidupan) search ssd1306_128x64_i2c_nano_v1.rar  
(baidupan) search ssd1306_128x64_i2c_v1.rar  
VCC<->3.3V  
GND<->GND  
SCL<->A5/SCL  
SDA<->A4/SDA  

* ZHONGBEST OLED 12864, i2c, 4 pins, ssd1306  
for stm32vldiscovery  
https://github.com/thaletterb/STM32-SSD1306-128x64-I2C  
#define I2C_TIMEOUT 100000  
->  
#define I2C_TIMEOUT 200000  
(baidupan) search Demo_1_stm32vldiscovery_oled12864_ssd1306_v2.rar  
https://www.espruino.com/ReferenceSTM32VLDISCOVERY  
VCC->3V3->Left top 3  
GND->GND->Left top 1  
SCL->PB6->Right top 8  
SDA->PB7->Right top 7  
(baidupan) search Demo_3_oled12864_i2c_信泰微_V6.0_S13-IIC_惠特自动化_心如刀割.rar  

* ZHONGBEST OLED 12864, i2c, 4 pins, ssd1306  
for STM32F105RC  
(baidupan) search Demo_2_stm32arduino_oled_i2c.rar  
VCC->+3.3V->Left bottom 4  
GND->GND->Left bottom 7  
SCL->6->Right top 7  
SDA->7->Right top 8  

* ZHONGBEST OLED 12864, i2c, 4 pins, ssd1306  
for STM32F103C8    
(baidupan) search Demo5_stm32f103c8.rar  
VCC->V3->Left bottom 2  
GND->G->Left bottom 1  
SCL->B6->Left bottom 4  
SDA->B7->Left bottom 3  

* ZHONGBEST OLED 12864, i2c, 4 pins, ssd1306  
for rpi    
sudo apt-get install wiringpi  
sudo raspi-config  
(Interfacing Options->I2C->Yes)  
https://github.com/iliapenev/ssd1306_i2c  
http://shumeipai.nxez.com/2017/09/13/solve-the-raspberry-pi-drive-oled-problem.html  
VCC->1->Left top 1  
GND->6->Right top 3  
SCL->5->Left top 3    
SDA->3->Left top 2    
(baidupan) search ssd1306_i2c-master.zip  

* ZHONGBEST OLED 12864, i2c, 4 pins, ssd1306  
for stc89c52      
VCC<->3.3V  
GND<->GND  
SCL<->P1.3  
SDA<->P1.2  
(baidupan) search oled_stc89c52_v1.rar  

* ZHONGBEST OLED 12864, i2c, 4 pins, ssd1306  
for stm32f030f4  
1) (baidupan) LED-PA4_stm32f030_soft_i2c_oled_v1.rar  
software implement i2c (see also stc89c52)  
VCC->3V3  
GND->GND  
SCL->PA5  
SDA->PA7  
2) (baidupan) STM32F030F4_oled_v3.rar  
code from https://github.com/rizqiuhuy/STM32F407_Tutorial/tree/master/I2C_OLED_Standart  
hardware implement i2c, HAL by stm32cubemx    
3) (baidupan) LED-PA4_stm32f030_i2c_oled_spl_hardware_v1.rar  
code from https://github.com/NjordCZ/opentag-eval/blob/master/TEST/STM320518-EVAL_FW_V1.0.1/Project/STM320518-EVAL/src/i2c_ssd1306.c  
hardware implement i2c, SPL      
VCC<->3V3  
GND<->GND  
SCL<->PA9  
SDA<->PA10  

* Arduino OLED 单色 白色 屏幕模块 0.96寸 SPI接口 12864, ssd1306  
for arduino  
https://shop108339233.taobao.com  
(baidupan) search oled_ssd1306.ino    

* 微雪_1.3inch_OLED_HAT  
for arduino  
see above  
http://www.waveshare.net/wiki/1.3inch_OLED_(A)  
(baidupan) search oled.ino  

## Serial Drivers (see my baidupan)  
* ft232  
for stm32vldiscovery  
https://embedds.com/programming-stm32-usart-using-gcc-tools-part-1/  
(baidupan) search Demo_ser_ft232_v1.rar  
Right bottom 7: PA9<->RXD (yellow)  
Right bottom 8: PA10<->TXD (orange)  
Left top 1: GND<->GND (black)  
Left top 3: 3V3<->VCCIO (red)  

* USB-TTL, Auto Programmer    
for stc89c52rc, 12MHz, baud=2400  
(baidupan) search uart_12MHz_baud_2400_v1.rar  
https://www.cnblogs.com/geekalan/p/4005427.html  

* 51单片机最小系统板, Rotot DIY, 幼智汇      
for stc89c52, 11.0592MHz, baud=9600    
(baidupan) ds1306_51_v1.rar  

## LCD  
* https://github.com/SGBotic/LCD-GUI-Library  
* https://github.com/prenticedavid/MCUFRIEND_kbv  

## TFT Drivers (not test, see my baidupan)  
* mcufriend, 3.5inch, ILI9486(?), 320X480  
3.5寸TFT彩屏模块 320X480超高清液晶屏  
for arduino  
(baidupan) 3.5inch_Arduino_ILI9486_V1.2.zip  
see arduino_lcd_ili9486  

* 2.4inch  
2.4寸 TFT 液晶屏 触摸屏 彩屏模块  
(baidupan) 2.4inch_Arduino_ILI9341_V3.0.zip   

* oled12864_i2c_信泰微  
V6.0_S13-IIC.rar  

* 彩屏TFT1.44寸液晶显示屏, YYROBOT    
TFT1.44寸彩屏资料 V6.0.zip  
(baidupan) UTFT_Bitmap_128x128_Serial_v1.rar  
(baidupan) UTFT_Demo_128x128_Serial_v1.rar  
(baidupan) UTFT_Font_128x128_Serial_v1.rar  
https://github.com/telamon/utft  

## OLED Drivers (not test, see my baidupan)  
* 0.96寸OLED显示屏模块 12864 arduino IICSPI 供原理图 12864屏  

## VS1003 Drivers  
* waveshare vs1003    
for stm32vldiscovery  
(baidupan) Demo_1_vs1003_v2_vldisco_success.rar    
https://sourceforge.net/projects/bin2header/  
1,       2,   top(2),                  bottom(1)  
3.3V, 3.3V,   3V3(top left 3),  
GND,  GND,    GND(top left 1),  
MISO, NC,     -------------------,     PB14(bottom from left 5)  
MOSI, DREQ,   PA7(bottom left 7) ,     PB15(bottom from left 6)  
SCLK, xREST,  PA5(bottom left 9) ,     PB13(bottom from left 4)  
xCS,  xDCS,   PA4(bottom left 10),     PB12(bottom from left 3)  

* small board, 信泰微  
for stm32vldiscovery  
(baidupan) Demo_1_vs1003_v3_small_board.rar  
5V<->5V(Right top 3)  
GND<->GND(Right top 1)  
XRST<->PA5(bottom left 9)  
MISO<->PB14(bottom from left 5)  
MOSI<->PB15(bottom from left 6)  
SCLK<->PB13(bottom from left 4)  
DREQ<->PA7(bottom left 7)  
XCS<->PB12(bottom from left 3)  
XDCS<->PA4(bottom left 10)  

* small board, 信泰微  
for arduino uno / arduino mega 2560    
(baidupan) vs1003_hello_arduino_uno_v2.rar  
5V<->5V  
GND<->GND  
XRES<->D8  
MISO<->D12<->D50  
MOSI<->D11<->D51  
SCLK<->D13<->D52  
DREQ<->D7  
XCS<->D9  
XDCS<->D6  

* small board, 信泰微 (**NOT GOOD**)  
for stc89c54rd+  
(baidupan) vs1003_51_v2.rar  
5V<->5V  
GND<->GND  
XRST<->P3.2  
MISO<->P1.6  
MOSI<->P1.5  
SCLK<->P1.7  
DREQ<->P3.5  
XCS<->P3.3  
XDCS<->P3.4  

## LED / Digital tube Drivers  
* 2位共阳极数码管  
for arduino  
(baidupan) digital_two_v1.rar  
D2(+R), D3, D4, D5, D6  
8.8.  
D7 ,D8, D9, D10, D11(+R)  

* tm1637, 信泰微, 4-Digit Display    
for arduino  
(baidupan) tm1637_v2.rar  
CLK<->D3  
DIO<->D2  
VCC<->5V(Don't use 3.3V)  
GND<->GND  

## Button Drivers  
* for arduino  
D2<->S<->5V, (Pull down) D2<->R<->GND    
https://www.arduino.cc/en/Tutorial/DigitalReadSerial  
https://www.arduino.cc/en/tutorial/button  
https://www.arduino.cc/en/Tutorial/AnalogReadSerial  
D2<->S<->GND, pinMode(2, INPUT_PULLUP)  
https://www.arduino.cc/en/Tutorial/DigitalInputPullup  

* for stc89c52 / stc89c52rc / at89s52    
P3.4<->S<->GND  
https://gitee.com/weimingtom/wmt_51  

## TF (MicroSD Card Adapter) Drivers  
* for arduino  
Arduino IDE->SD->CardInfo  
https://www.arduino.cc/en/Tutorial/CardInfo  
https://www.arduino.cc/en/Reference/SD  
CS<->D4  
SCK<->D13  
MOSI<->D11  
MISO<->D12  
VCC<->5V  
GND<->GND  
(baidupan) microsd_card_adapter_v1.rar  
(baidupan) sdcard_v1.rar  

## DFPlayer Mini Drivers    
* for arduino  
https://github.com/DFRobot/DFPlayer-Mini-mp3  
http://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299  
(baidupan) mp3player_v1.rar  
Left Top, U  
1<->5V  
2<->1KR<->D3  
3<->1KR<->D2  
4(not connect)  
5(not connect)       
6<->speaker  
7<->GND  
8<->speaker    

## L298N Drivers    
* for arduino nano    
(baidupan) L298N_v1.rar  
OUT1<->motor+  
OUT2<->motor-  
+12V<->battery 6V  
GND<->battery GND<->arduino GND  
+5V<->arduino 5V  
IN1<->D5  
IN2<->D4  

* for arduino nano + 2.4G(BLE)  
(baidupan) L298N_v2.rar  
(baidupan) bleserialport_v2.rar  
OUT1<->motor+  
OUT2<->motor-  
+12V<->battery 9V  
GND<->battery GND<->arduino GND  
+5V<->arduino 5V  
IN1<->D5  
IN2<->D4  
2.4G:  
D10<->TX  
D11<->RX  
Vin<->VCC  
GND<->GND  

## Keypad Drivers  
* 4x4 keypad  
for arduino  
https://playground.arduino.cc/Code/Keypad
(baidupan) keypad_v1.rar  
up->down  
Pin1(Col4)<->D11  
Pin2(Col3)<->D10  
Pin3(Col2)<->D9  
Pin4(Col1)<->D8  
Pin5(Row1)<->D7  
Pin6(Row2)<->D6  
Pin7(Row3)<->D5  
Pin8(Row4)<->D4  

## ds1306 Drivers
* for stc89c52  
(baidupan) ds1306_51_v1.rar  
baud=9600 (for 11.0592MHz)    
VCC<->5V (or 3V, or not connected)  
GND<->GND  
CLK<->P1.1  
DAT<->P1.2  
RST<->P1.3  

## BLE (2.4G) Drivers  
* CC2541  
* (baidupan) bleserialport_v2.rar  

## Bluetooth (HC-05) Drivers  
* (baidupan) amarino_v2.rar  
* (baidupan) bluetoothchat_v1.rar    

## LED  
* STM32L151C8T6_pb9_led_toggle_v1.rar  

## Debugger Dirvers  
* jlink  

## user manual  
http://www.nongnu.org/avr-libc/user-manual/FAQ.html#faq_cplusplus  

## mp3  
ATJ2085  
GPD2856C  

## ATmega8  
https://github.com/MCUdude/MiniCore  

## raspberrypiwiki  
http://www.raspberrypiwiki.com/index.php/Arduino  

## boards    
https://en.wikipedia.org/wiki/List_of_Arduino_boards_and_compatible_systems  

## mp3 player (VS1053B)      
http://wiki.seeedstudio.com/cn/Music_Shield_V2.2/  
http://www.waveshare.net/wiki/Music_Shield  

## guichan port  
(baidupan) guichan_v15_sss.rar  

## 7Robot  
https://github.com/7Robot  

## Bluetooth 2.0, amarino    
https://github.com/rubanraj54/amarino  
http://www.amarino-toolkit.net/index.php/download.html  
