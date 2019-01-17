# wmt_arduino_study
My Arduino Uno study

## Arduino Playground  
* https://playground.arduino.cc/Main/InterfacingWithHardware  

## AVR Manual  
* http://www.nongnu.org/avr-libc/user-manual/index.html  

## Arduino Library List  
* https://www.arduinolibraries.info  

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
<> for nano  
https://gitee.com/weimingtom/arduboymod  

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
(baidupan) search Demo_2_stm32arduino_oled_i2c_v2.rar  
VCC->+3.3V->Right bottom 4  
GND->GND->Right bottom 7  
SCL->6->Left top 7  
SDA->7->Left top 8  
LED+R->D2(PC11)->Left top 3, Right Bottom 6(GND)  

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
(baidupan) Example01-DisplayString_v1.rar  
(baidupan) Example07-ShowBMP_320X480_v1.rar  
<> wifiboy WiFiBoy32 Tetris Game, for auduino mega2560  
https://wifiboy.org/tutorials.html  
(baidupan) wb32_tetris_game_v1.rar  

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

* 中景园, 1.44' TFT, spi, 直插式, 配套屏幕    
<> for STM32F103RC (software spi)    
(baidupan) 1.44LCD-STM32F103RC_v1.rar  
(baidupan) UCGUI_touch_1.44LCD-STM32F103RC_v1.rar  
GND<->GND  
VCC<->3.3V  
SCL<->PB13  
SDA<->PB15  
RES<->PB11  
DC<->PB10  
CS<->PB12  
BL<->PB1  
<> for rpi (hardware spi)  
(baidupan) 1.44inch-LCD-HAT-Code.7z  
GND<--> (left 20)  
VCC<--> (left 1)  
SCL<-->11(left 12)  
SDA<-->10(left 10)  
RES<-->27(left 7)  
DC<-->25(right 11)  
CS<-->8(right 12)  
BL<-->24(right 9) 
<> for rpi (software spi)  
(baidupan) display_graphics_rpi_soft_spi_v3.rar  
(600ms per frame)  
GND<-->(left 20)  
VCC<-->(left 1)  
SCL<-->(left 8)  
SDA<-->(left 6)  
RES<-->(left 3)  
DC<-->(left 2)  
CS<-->(right 12)  
BL<-->(left 9)  
<> for spi (native software spi)  
(baidupan) showbmp_native_2.4_v3.tar.gz  
(82ms per frame, display color error)  

* 2.4 spi touch screen, 全动电子    
for STM32F103RC  
(baidupan) 2.4-SPI-9341-STM32F103RC-NoTouch_v1.rar  
http://www.lcdwiki.com/zh/2.4inch_SPI_Module_ILI9341_SKU:MSP2402  
(baidupan) Demo_STM32F103RCT6_Software_SPI_v1.rar  
PB9<--->LED  
PB13<--->SCK  
PB15<--->SDI(MOSI)  
PB10<--->DC  
PB12<--->RESET  
PB11<--->CS  
GND<---->GND  
VCC<---->3.3V  

* 2.4 spi touch screen, 全动电子    
for rpi  
<1> hardware spi:  
https://github.com/nopnop2002/wiringpi-tft-tool  
(baidupan) rpi_spi_tft_v1.rar  
NC<--->SDO(MISO)  
#1(left 1)<--->LED  
#23(left 12)<--->SCK  
#19(left 10)<--->SDI(MOSI)  
#3(left 2)<--->DC  
#5(left 3)<--->RESET  
#24(right 12)<--->CS  
#25(left 13)<---->GND  
#17(left 9)<---->3.3V  
<2> software spi (ported from arduino version):  
(baidupan) display_graphics_rpi_soft_spi_v2.rar  
(baidupan) display_graphics_rpi_soft_spi_v3.rar  
(2700ms per frame)  
#1(left 1)<-->LED  
#15(left 8)(3)<--->SCK    
#11(left 6)(0)<--->SDI(MOSI)    
#3(left 2)(8)<--->DC    
#5(left 3)(9)<--->RESET    
#24(right 12)(10)<--->CS    
#39(left 20)<---->GND    
#17(left 9)<---->3.3V    
<3> native software spi  
(baidupan) (baidupan) showbmp_native_2.4_v3.tar.gz   
(48ms perframe)  


* 2.4 spi touch screen, 全动电子    
for arduino  
http://www.lcdwiki.com/zh/2.4inch_SPI_Module_ILI9341_SKU:MSP2402  
(baidupan) arduino_2.4inch_spi_display_graphics_v1.rar  
NC/D12<--->SDO(MISO)  
5V/3V3<--->LED  
D13<--->SCK  
D11<--->SDI(MOSI)  
A3<--->DC  
A4<--->RESET  
A5<--->CS  
GND<---->GND  
5V/3V3<---->3.3V  
(need TXS0108E)  
(baidupan) wb32_tetris_game_wifiboymod_v3.rar  

* 2.4 uno screen, mcufriend, 240x320, 信泰微  
for arduino uno  
(baidupan) 2.4inch_arduino_v1.rar  

* 1.3 ips, 中景园    
<1> for rpi  
(baidupan) showbmp_native_v2_success.tar.gz  
(baidupan) rpi-gpio-benchmark-master_v1_success.tar.gz  
(baidupan) showbmp_native_v3_success_init_twice.tar.gz  
(need init twice, or black screen)  
GND<-->(left 20)  
VCC<-->(left 1)  
SCL<-->(left 8)  
SDA<-->(left 6)  
RES<-->(left 3)  
DC<-->(left 2)  
BLK<-->(right 12) (not necessary)    
(baidupan) infones_rpi_v1.rar  
<2> for stm32f103rc, 直插  
(baidupan) 1.3IPS-STM32F103RC_v1.rar  
<3> for stm32f407ve  
GND<-->GND  
VCC<-->3V3  
SCL<-->PB13    
SDA<-->PB15  
RES<-->PB11  
DC<-->PB10  
BLK<-->PB12 (not necessary)    
BLK<-->(right 12) (not necessary)    
(baidupan) 1.3IPS_stm32f407ve_v1.rar  
<4> for esp32  
GND<-->Right top 1  
VCC<-->Left top 1  
SCL<-->Left top 7  
SDA<-->Left top 8  
RES<-->Left top 9  
DC<-->Left top 10  
BLK<-->Left top 11  
(baidupan) ips1_3_esp32_v1.rar  
<5> for stm32f429ig  
GND<-->GND  
VCC<-->3V3  
SCL<-->PB13    
SDA<-->PB15  
RES<-->PB11  
DC<-->PB10  
BLK<-->PB12 (not necessary)    
(baidupan) 1.3ips_stm32f429ig_v1.rar  

* 信泰微, 1.44寸TFT, ST7735, 128x128, spi, hardware  
<> for esp8266  
(baidupan) display_graphics_hard_esp8266_v1.rar  
VCC<--->3V  
GND<--->G  
GND<--->NC  
NC<--->NC  
NC<--->NC  
LED<--->D4  
CLK<--->D5  
SDI<--->D7  
RS<--->D3  
RST<--->D2  
CS<--->D1  
https://github.com/esp8266/Arduino/blob/master/doc/libraries.rst  
https://github.com/nzmichaelh/Adafruit-ST7735-Library  
lcdwiki, for 1.44  
(baidupan) Simple_Module_ESP8266_Demo.zip  
http://www.lcdwiki.com/zh/【Application】1.44inch_SPI_Module_MSP1443_with_D1_mini  
lcdwiki, for 1.6  
(baidupan) Demo_ESP8266_SPI.zip  
http://www.lcdwiki.com/zh/【Application】1.6inch_SPI_Module_MSP1601_with_D1_mini  

## LCD  
* Nokia5110  
for stc89c52  
(baidupan) nokia5110_stc_v1.rar  
RST<--->P2.1  
CE<--->P2.2  
DC<--->P2.3  
Din<--->P2.4  
Clk<--->P2.5  
Vcc<--->5V  
BL<--->5V  
Gnd<--->GND  

* Nokia5110
for arduino uno   
(baidupan) nokia5110_arduino_v1.rar  
https://github.com/adafruit/Adafruit-PCD8544-Nokia-5110-LCD-library  
RST<--->D3  
CE<--->D4  
DC<--->D5  
Din<--->D6  
Clk<--->D7  
Vcc<--->Vin  
BL<--->5V  
Gnd<--->GND  
(baidupan) gamebuino_nano_v1.rar    

* LCD1602A  
for arduino  
(baidupan) lcd1602_arduino_v1.rar  
VSS<-->GND  
VDD<-->5V  
V0<-->R?,5V,GND  
RS<-->D12  
RW<-->GND  
E<-->D11  
D0<-->NC  
D1<-->NC  
D2<-->NC  
D3<-->NC  
D4<-->D5  
D5<-->D4  
D6<-->D3  
D7<-->D2  
A<-->5V  
K<-->GND  

* LCD1602A  
for stc89c52  
(baidupan) lcd1602_stc_v1.rar   
VSS<-->GND  
VDD<-->5V  
V0<-->R?,5V,GND  
RS<-->P1.0  
RW<-->P1.1  
E<-->P1.2  
D0<-->P2.0  
D1<-->P2.1  
D2<-->P2.2  
D3<-->P2.3  
D4<-->P2.4  
D5<-->P2.5  
D6<-->P2.6  
D7<-->P2.7  
A<-->5V  
K<-->GND  

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
Use DiskGenius to format FAT32    

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

## Bluetooth (HC-05) Drivers, 蓝牙模块    
* (baidupan) amarino_v2.rar  
* (baidupan) bluetoothchat_v1.rar    
* (baidupan) amarino_v8_understand_send_recv_place.rar  

## LED  
* STM32L151C8T6_pb9_led_toggle_v1.rar  

## Storage  
* W25Q16 (on board), 2MB  
for mcudev stm32f407ve  
(baidupan) W25Q16_stm32f407ve_v1.rar  

## Debugger Dirvers  
* jlink  
* st-link v2  
* (baidupan) stm32最小系统接法  

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

## LCD Wiki  
LCD Wiki是一家开源共享的专业显示屏分享网站  
http://www.lcdwiki.com/zh  

## 洞洞板，万用板  
万能板的焊接方法（多图）  
http://adi.eefocus.com/module/forum/thread-594271-1-1.html  
(baidupan) 万能板的焊接方法（多图）.doc  
连孔板（特加特）  
proto shield  

## arduino365 / 中贝斯特  
http://arduino365.com/2017/01/06/教程示例索引页/  

## 6502  
http://www.6502.org  

## arduboy
* 【Arduboy】 Arduboy上目前为止10大最好玩的游戏 top10  
https://www.bilibili.com/video/av16529463  
* eried/ArduboyCollection  
https://github.com/eried/ArduboyCollection  
* ProjectABE  
https://github.com/felipemanga/ProjectABE  
* Erwin's Arduboy Collection  
http://arduboy.ried.cl  
* Arduboy-clone  
https://github.com/B45i/Arduboy-clone  

## gamebuino  
http://www.jiguo.com/article/index/50815.html  
http://microchip.eefocus.com/module/forum/thread-8974-1-1.html  

## Winbond flash  
https://github.com/adafruit/Adafruit_TinyFlash  
https://www.cnblogs.com/zlbg/p/4246721.html  
http://www.instructables.com/id/How-to-Design-with-Discrete-SPI-Flash-Memory/?ALLSTEPS  

## Level Shifter  
http://henrysbench.capnfatz.com/henrys-bench/arduino-displays/arduino-1-44-in-spi-tft-display-tutorial/  

## LCD5110_Basic  
http://www.rinkydinkelectronics.com/library.php?id=44  
https://www.jianshu.com/p/da13f46f59ab  

## Adafruit GFX Graphics Library  
https://learn.adafruit.com/adafruit-gfx-graphics-library/overview  

## 示波器  
逻辑分析仪  

## Microduino  
https://github.com/wasdpkj/Microduino-IDE-Support  

## mini D1 wifi ESP-12F N ESP8266开发板+TFT液晶屏模块， 信泰微  
https://github.com/wemos/D1_mini_Examples  

## 18650  
18650锂电池2节+2节电池盒+充电器套装 Arduino GSM GPRS移动电源, 大学生电子商铺    
