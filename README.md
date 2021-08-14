# wmt_arduino_study
My Arduino Uno study

## Arduino Playground  
* https://playground.arduino.cc/Main/InterfacingWithHardware  

## AVR Manual  
* http://www.nongnu.org/avr-libc/user-manual/index.html  

## Arduino Library List  
* https://www.arduinolibraries.info  

## 原理图, from dfrobot taobao    
* http://image.dfrobot.com/image/data/DFR0181/Arduino_Uno_Rev3-schematic.pdf  
* 官网资料   
http://www.arduino.org/products/boards/arduino-uno  
* Atmega328控制器  
http://www.dfrobot.com.cn/image/data/DFR0109/Atmega328P.pdf  
* Eagle设计文档  
http://www.dfrobot.com/image/data/DFR0181/arduino_Uno_Rev3-02-TH.zip  
* 原理图  
http://www.dfrobot.com/image/data/DFR0181/Arduino_Uno_Rev3-schematic.pdf  
* Arduino IDE下载 (Arduino ORG)  
http://www.arduino.org/downloads  
* 技术支持论坛 （24小时内回复) (工作日）  
http://mc.dfrobot.com.cn/  
* Arduino驱动安装教程  
http://wiki.dfrobot.com.cn/index.php/Arduino%E9%A9%B1%E5%8A%A8%E7%9A%84%E5%AE%89%E8%A3%85  
* Arduino入门教程  
http://wiki.dfrobot.com.cn/index.php/Arduino%E5%85%A5%E9%97%A8%E6%95%99%E7%A8%8B  

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
* https://debugdump.com  
* https://www.mianbaoban.cn  
* http://bbs.mydigit.cn/thread.php?fid=108  
* http://www.picbbs.net  

## Ref  
* https://github.com/adafruit/Adafruit-GFX-Library  
* https://github.com/adafruit/Adafruit_SSD1306  
* https://github.com/Hyvok/SSD1306-display-driver-for-Arduino  

## My Game  
https://gitee.com/weimingtom/arduboymod  
https://gitee.com/weimingtom/wifiboymod    

## RTOS  
* https://github.com/zephyrproject-rtos  
* https://github.com/PeterVranken/RTuinOS  
* https://www.rt-thread.org  

## USB-TTL  
CTS，输入，清除发送  
RTS，输出，请求发送  
DTR，输出，数据终端就绪  

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
<> for rpi (fbtft)  
(baidupan) fbtft_v2_success.tar.gz  
sudo modprobe fbtft_device name=adafruit18 gpios=reset:27,dc:25,cs:8,led:24 speed=40000000 bgr=1 fps=60 custom=1 height=128 width=128 rotate=180  
GND               (right top 3)  
VCC               (left top 1)  
SCLK P11/SCLK     (Left Top 12)  
MOSI P10/MOSI     (left top 10)  
RST	P27	          (left top 7)  
DC	P25	          (right top 11)   
CS	P8/CE0        (right top 12)  
BL	P24	          (right top 9)  
https://github.com/weimingtom/wmt_rpi_study/blob/master/framebuffer/20190920/test.c  

* 2.4 spi touch screen, 全动电子  
<1> for STM32F103RC  
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
<2> ucgui touch  
for 中景园stm32f103rct6  
(baidupan) spi2.4_UCGUI_touch_v4_stm32f103rc.rar  
VCC<->VCC  
GND<->GND  
CS<->PB13  
RESET<->PB15  
DC<->PB11  
SDI(MOSI)<->PB10  
SCK<->PB12  
LED<->3.3V(left bottom)  
SDO(MISO)<->PB1  
T_CLK<->PA0  
T_CS<->PA1  
T_DIN<->PA2  
T_DO<->PA3  
T_IRQ<->PA4  

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
https://gitee.com/weimingtom/wifiboymod  

* 2.4 uno screen, mcufriend, 240x320, 信泰微  
for arduino uno  
(baidupan) 2.4inch_arduino_v1.rar  

* 1.3 ips, 中景园, ST7789VW      
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
<1.1> for rpi and wiringpi  
GND<-->(left 20)  
VCC<-->(left 1)  
SCL<-->(left 8)<-->(hw spi)(left 12)  
SDA<-->(left 6)<-->(hw spi)(left 10)  
RES<-->(left 3)  
DC<-->(left 2)  
BLK<-->(right 12)  
(baidupan) showbmp_wiringpi_v3.tar.gz  
<2> for stm32f103rc, 直插  
(baidupan) 1.3IPS-STM32F103RC_v1.rar  
<3> for stm32f407ve, sw spi    
GND<-->GND  
VCC<-->3V3  
SCL<-->PB13    
SDA<-->PB15  
RES<-->PB11  
DC<-->PB10  
BLK<-->PB12 (not necessary)    
BLK<-->(right 12) (not necessary)    
(baidupan) 1.3IPS_stm32f407ve_v1.rar  
<3.1> for stm32f407ve, hw spi  
GND<-->GND  
VCC<-->3V3  
SCL<-->PB13<--->(hw spi)PB3    
SDA<-->PB15<--->(hw spi)PB5  
RES<-->PB11  
DC<-->PB10  
BLK<-->PB12 (not necessary)    
(baidupan) 1.3ips_hwspi_stm32f407ve_v1.rar  
<4> for esp32  
GND<-->Right top 1  
VCC<-->Left top 1  
SCL<-->Left top 7  
SDA<-->Left top 8  
RES<-->Left top 9  
DC<-->Left top 10  
BLK<-->Left top 11  
(baidupan) ips1_3_esp32_v1.rar  
<5> for stm32f429ig and stm32h750    
GND<-->GND  
VCC<-->3V3  
SCL<-->PB13    
SDA<-->PB15  
RES<-->PB11  
DC<-->PB10  
BLK<-->PB12 (not necessary)    
(baidupan) 1.3ips_stm32f429ig_v1.rar  
(baidupan) stm32h750_1.3ips_v1.rar  
<6> for esp32, hard spi  
GND<-->Right top 1  
VCC<-->Left top 1  
SCL<-->Left top 7(soft)<--->Left bottom 8(left top 12)(hard)  
SDA<-->Left top 8(soft)<--->Left bottom 5(hard)  
RES<-->Left top 9  
DC<-->Left top 10  
BLK<-->Left top 11  
(baidupan) ips1_3_esp32_hard_v2.rar  
<7> for linkit7697, soft spi   
GND<-->GND    
VCC<-->3V3  
SCL<-->P10  
SDA<-->P14  
RES<-->P15  
DC<-->P16  
BLK<-->P17  
(baidupan) ips1_3_linkit7697_v1.rar  
<8> for esp32wrover (KE32-WROVER-C10), software/haradware spi  
(baidupan) ips1_3_esp32wrover_v3.rar  
(baidupan) ips1_3_esp32wrover_hard_v3.rar  
GND<-->Left top 1    
VCC<-->Left top 2    
SCL<-->GPIO32@Left top 8(soft)<--->GPIO14@Left bottom 8(hard)  
SDA<-->GPIO33@Left top 9(soft)<--->GPIO13@Left bottom 5(hard)  
RES<-->GPIO25@Left top 10  
DC<-->GPIO26@Left top 11  
BLK<-->NC(not connect)  
GPIO27@Left top 12<-->D4(LED_BUILTIN)      
board: ESP32 Wrover Module  
upload speed 115200  
<9> for nrf52840 breakout, 讯联电子, arduino    
(baidupan) ips13_nrf52840_v1.rar  
GND<-->Left top 1, GND<-->j-link ob GND  
VCC<-->Left top 1, VCC<-->j-link ob VCC 3.3V    
SCL<-->Right top 9, 0.19  
SDA<-->Right top 8, 0.20    
RES<-->Right top 7, 0.21  
DC<-->Right top 6, 0.22    
BLK<-->Right top 5, 0.23    
NC<-->Right top 1, SWCLK<-->j-link ob SWCLK  
NC<-->Right top 2, SWDIO<-->j-link ob SWDIO  
不要用USB供电，TFT的VCC脚要直接接电源（或者j-link ob的VCC），否则亮度很暗  

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

* 2.0 ips, 金鑫液晶显示屏, 飞越液晶显示屏, ST7789V    
<1> for stm32f103rc  
(baidupan) ipstest_stm32f103rc_v2_success.rar  
(baidupan) ipstest_stm32f103rc_v4_luo.rar  
SCL<-->PB13  
SDA<-->PB15  
RES<-->PB11  
DC<-->PB10  
CS<-->PB12  
<2> for esp32, soft spi  
(baidupan) ips2_0_esp32_v1_rotate_screen.rar  
(baidupan) ips2_0_esp32_2_v1.rar  

* 2.0 ips, 全动电子, ST7789, 320x240, spi    
<1> for stm32h743vit6, 中景园, software spi      
VCC<-->3.3V  
GND<-->GND  
SDA<-->PA7  
BLK<-->PB1  
SCL<-->PA5  
DC,RS<-->PC5  
RES<-->PC4  
CS<-->PB0  
http://www.lcdwiki.com/zh/2.0inch_IPS_Module  
(baidupan) Demo_STM32H743_SPI_v1_zhonjingyuan_2_0.rar  
(baidupan) Demo_STM32H743VIT6_Software_SPI_v1_zhonjingyuan_2_0.rar  

* 3.5inch rpi TFT, 信泰微, goodtft, 3.5寸彩屏触摸屏TFT, ili9486      
<1> for rpi3  
Ported from http://www.waveshare.net/wiki/3.5inch_TFT_Touch_Shield  
(baidupan) 3.5inch_ili9486_rpi3_v1.rar  
(baidupan) showbmp_vc_vv3_spi_32MHz_with_vendor.rar  
http://www.waveshare.net/shop/3.5inch-RPi-LCD-A.htm  
http://www.waveshare.net/shop/3.2inch-RPi-LCD-C.htm  

* 2.4inch rpi TFT, 全动, 触摸屏TFT显示屏彩屏320x240, goodtft, ili9341    
<1> for rpi3  
Ported from http://www.waveshare.net/wiki/2.8inch_TFT_Touch_Shield  
(baidupan) 2.4inch_ili9341_rpi3_v1.rar  
http://www.waveshare.net/shop/2.8inch-RPi-LCD-A.htm  

* 2.8inch rpi TFT, 友善2.8寸电阻触摸显示屏, ST7789S    
http://wiki.friendlyarm.com/wiki/index.php/Matrix_-_2%278_SPI_Key_TFT/zh  
http://wiki.friendlyarm.com/wiki/index.php/Matrix_-_2'8_SPI_TFT/zh  
https://github.com/friendlyarm/h3_lichee/blob/master/linux-3.4/drivers/staging/fbtft/fb_st7789s.c  
https://github.com/friendlyarm/linux-3.4.y/blob/nanopi2-lollipop-mr1/drivers/staging/fbtft/fb_st7735s.c  
(baidupan) spi2.8matrix_rpi_v1.rar  

* 3.5inch tft, 中景园3.5寸spi rgb屏，320x480, ili9486L  
<1> for stm32f103rct6  
(baidupan) spi3.5_stm32f103rct6_v1.rar  

* 3.5inch tft 40pin, 中景园3.5寸rgb裸屏，320x480, ili9486L, 	Z350IT006 V0.3  
<1> for stm32f103rct6, spi 4线    
(baidupan) spi3.5luo_stm32f103rct6_v1.rar  
接法同飞越的3.5寸  

* 3.5inch tft 40pin, 飞越液晶屏，320x480, ili9481, HT035SHV009NS-9481,2018/06/06  
<1> for stm32f103rct6, spi 4线    
(baidupan) spi3.5luo_stm32f103rct6_v1.rar  
1-4,TP<->NC  
5,GND<->GND<-------------(1)  
6,IOVCC<->3.3V<-----------(2)  
7,IOVCC<->3.3V  
8,FMARK<->NC  
9,TFT_CS<-->GND  
10,TFT_RS<-->DC<--------------PB10 (6)  
11,TFT_WR<-->CLK<------------PB13 (3)  
12,TFT_RD<-->3.3V  
13,SPI SDI<->MOSI<------------PB15 (4)  
14,SPI SD0<->MISO<------------PB1 (8)  
15,TFT_RST<-->RES<------------PB11 (5)  
16,GND<->GND  
17,TFT_D0<-->NC  
18,TFT_D1<-->NC  
19,TFT_D2<-->NC  
20,TFT_D3<-->NC  
21,TFT_D4<-->NC  
22,TFT_D5<-->NC  
23,TFT_D6<-->NC  
24,TFT_D7<-->NC  
25-32,DB8-DB15<->NC  
33,LED-A<->R(变阻器)<->3.3V  
34,LED-K1<->GND  
35,LED-K2<->NC  
36,LED-K3<->NC  
37,GND<->GND  
38,IM0<->3.3V  
39,IM1<->3.3V  
40,IM2<->3.3V  
<2> for esp32, software spi    
(baidupan) ips3_5_esp32_v3.rar  
5,GND<->GND<-------------(1) right top 1  
6,IOVCC<->3.3V<-----------(2) left top 1  
7,IOVCC<->3.3V  
8,FMARK<->NC  
9,TFT_CS<-->GND  
10,TFT_RS<-->DC<--------------(6) left top 10  
11,TFT_WR<-->CLK<------------(3) left top 7  
12,TFT_RD<-->3.3V  
13,SPI SDI<->MOSI<------------(4) left top 8  
14,SPI SD0<->MISO<------------(8) NC  
15,TFT_RST<-->RES<------------(5) left top 9   

* 2.4inch spi, 18pin, 飞越液晶屏，华视捷, 320x240, ili9341, HT024SQV003NH-T001,2018/07/04  
<1> for stm32f103rct6, soft spi    
(baidupan) luo_STM32F103RCT6_Software_SPI_v1.rar    
2(RESET)<---->PB12  
3(SPI_SCL)<---->PB13  
4(SPI_A0)<---->PB10  
5(CS)<---->PB11  
6(SPI_SDA)<---->PB15  
7(SPI_SDO)<---->NC(PB14)  
8(GND)<---->GND  
9(IOVCC)<---->3.3V  
10(A)<--->(0R,or R)<-->3.3V  
11(K)<--->GND  

* 2.4inch spi, retrozero, ili9341, 飞越液晶屏 and 中景园  
飞越液晶屏和中景园这两家的ili9341, 2.4寸, 18针裸屏是兼容的，驱动程序互通  
<1> for rpi0  
(baidupan) 2.4spi_hand_rpi0_v1.tar.gz  
<2> for stm32f103rct6  
(baidupan) spi2.4hand_stm32f103rct6_v1.rar  
GND<->left 3  
VCC<->right 1  
SCK,PB13<->right 12  
SDI/MOSI,PB15<->right 10   
CS,PB11<->left 12  
DC/RS,PB10<->left 11  
RST,PB12<->right 7  
<3> for esp32  
(baidupan) LCD_Show_v2_esp32_2.4spi_hand.rar  

* 2.4寸TFT液晶显示屏 7789驱动高清彩色屏 并口8位 可带触摸工控屏, JLT液晶专家, JLT24100B, 24PIN     
兼容Sipeed MaixPy, Maix Dock, Maix Bit的官方24针屏线接口        
https://maixpy.sipeed.com/zh/libs/peripheral_modules/touchscreen.html  
http://dl.sipeed.com/Accessories/LCD/2.4%20lcd.jpg  
http://dl.sipeed.com/Accessories/LCD/  
???官方用的可能是这个：    
http://dl.sipeed.com/Accessories/LCD/HT043DA-V.0-单屏更新版本.pdf  

* 4.3寸TFT液晶屏，RGB接口TFT屏(480x272,不带触摸), 东莞市慧勤智远科技  
兼容Sipeed 荔枝派nano （荔枝派nano有对应480x272分辨率的官方系统镜像，但荔枝派zero没有）  
http://dl.sipeed.com/Accessories/LCD/%5B1%5D4.3寸液晶屏规格%20书FGD430A4005_Spec.pdf  
http://nano.lichee.pro  
推测大部分4.3寸相同接口规范的屏都兼容荔枝派nano的屏线接口    
40 pin  
http://dl.sipeed.com/Accessories/LCD/AT050TN43%20V.1%20Pre%20Ver01%2020100511%20%28A050-43-TT-11%29_201102115899.pdf  

* 480x272分辨率：RGB接口正点原子4.3寸RGB电容触摸液晶屏模块, 正点原子  
正点原子的4.3寸屏线版屏（LCD4342）  
兼容源地工作室, STM32F429IGT6核心板+NandFlash+SDRAM+SPIFlash+EEPROM （A1型）  
http://vcc-gnd.com/rtd/html/STM32/quickref.html  
由于4.3寸屏没有显示内存，只能通过再附加一个另外的驱动芯片才有可能让stm32驱动起它，  
LCD4342包含了处理芯片和转接板（有两个屏线接口），并非纯裸屏   
所以要注意LCD4342引出的40pin规范跟4.3寸裸屏的40pin是不同的  

* 目前已知可以用WiringPi驱动的Rasperry Pi HAT有这些：  
可以参考waveshare对应尺寸的arduino扩展板模块驱动代码做移植（例如waveshare的3.2寸跟全动2.4寸一样）    
<1> 全动电子, 2.4寸, ili9341    
http://www.lcdwiki.com/2.4inch_RPi_Display  
http://www.waveshare.net/wiki/3.2inch_TFT_Touch_Shield  
<2> 信泰微（实际上是全动电子的）， 3.5寸, ili9486   
http://www.lcdwiki.com/3.5inch_RPi_Display  
http://www.waveshare.net/wiki/3.5inch_TFT_Touch_Shield  
<3> 友善之臂, 2.8寸, ST7789S  
参考微雪的1.3寸ips屏代码和中景园的1.3寸ips屏代码（基于ST7789V和ST7789VW）， 需要改动    
http://wiki.friendlyarm.com/wiki/index.php/Matrix_-_2%278_SPI_TFT/zh  
http://wiki.friendlyarm.com/wiki/index.php/Matrix_-_2%278_SPI_Key_TFT  
http://wiki.friendlyarm.com/wiki/index.php/Matrix_-_2%278_SPI_TFT  
<4> 推测全动电子的2.4寸、2.8寸、3.2寸HAT应该都可以兼容2.4寸的驱动代码（都是ili9341）  
http://www.lcdwiki.com/Main_Page  

* 2.2 inch ili9341, esp32, ttgo-t4  
TFT_MISO<-->12 (VSPI)    
TFT_MOSI<-->23  
TFT_CLK<-->18  
TFT_CS<-->27  
TFT_DC<-->32  
TFT_RST<-->5  
TFT_LED<-->4  
(baidupan) search LilyGo_Txx_v1.rar  
https://github.com/Xinyuan-LilyGO/LilyGo_Txx  
https://github.com/LilyGO/TTGO-T4-DEMO  

* 2.4 inch ili9341, wio terminal  
(baidupan) search tft_flash_bitmap_wio_v1.rar  

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

## 语音合成  
* 【优信电子】XFS5152CE语音合成模块 中英文语音合成录放语音识别, 科大讯飞, XFS5152CE     
用PC驱动, 接法如下  
**All switch to zero or off, default 115200 baud**  
**Pins on left edge:**    
left 1, P1, GND<->GND  
right 1, P2, VCC<->3.3V  
right 2, P4, AO_P<->speaker+  
right 3, P6, AO_N<->speeker-  
right 4, P8, RXD<->Tx  
right 5, P10, TXD<->Rx  
如果声音不够大，可以外接5V供电的功放板PAM8403：  
信泰微, 超微型数字功放板模块 2x3W D类 PAM8403 高效2.5～5V 可USB供电      
接其中一个声道（例如都接L左声道）  

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

## PS2X controller, gamepad      
* arduino uno  
(baidupan) PS2X_Example_v1.rar  
GND<->GND  
VCC<->5V  
DAT<->D13  
CMD<->D11  
CS<->D10  
CLK<->D12  

## FC 9 pins gamepad, DB9 interface (serial interface)      
* STM32学习笔记----FC游戏手柄  
https://blog.csdn.net/Do_Not_Ask_Me/article/details/89460142  
if the gamepad db9 interface holes face to me, five holes above four holes, from right to left,  
top, right to left, number 1 to number 5: NC, data, latch, clock, NC.  
bottom, right to left, number 6 to number 9: vcc, NC, gnd, NC.  
* esp32  
2,RXD<->Left top 7,GPIO32  
3,TXD<->Left top 8,GPIO33  
4,DTR<->Left top 9,GPIO25  
6,DSR<->Left top 1,3.3V  
8,CTS<->Right top 1,GND  
(baidupan) fc_gamepad_esp32_v1.rar   
* arduino uno    
2,RXD<->CLK,D12  
3,TXD<->LAT,D11  
4,DTR<->DAT,D10  
6,DSR<->5V  
8,CTS<->GND  
(baidupan) fc_gamepad_uno_v3.rar  
* SNES_Keyboard    
https://playground.arduino.cc/Main/InterfacingWithHardware/#joygame  
https://github.com/j-mcc1993/SNES_Keyboard  

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
(baidupan, arduino nano code) L298N_v2.rar  
(baidupan) bleserialport_v2.rar  
(baidupan, **添加方向盘功能**，配合L298N_v2.rar) bleserialport_v3.rar  
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
蓝牙小车, CC2541:  
(baidupan) JDY-08模块（JDY-V3.3.rar  
* see below HC05蓝牙模块  

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
* (baidupan, **添加方向盘功能**) bleserialport_v3.rar  
* NRF24L01  
* TODO  
* 蓝牙小车, CC2541:  
* (baidupan) JDY-08模块（JDY-V3.3.rar  
* see below HC05蓝牙模块  
* search baidupan,   
CC41-A AT指令使用方法.pdf  
(5 pins, not good) GH系列透传模块AT指令说明.docx  
AT指令集.pdf  
(**VERY IMPORTANT**) 新款Arduino入门套件.rar  
* similar code: https://github.com/Lembed/Android-BLE-Terminal  
* similar code: https://github.com/pondahai/Android-BLE-Terminal-master  

## Bluetooth (HC-05) Drivers, HC05蓝牙模块    
* (baidupan) amarino_v2.rar  
see https://github.com/rubanraj54/amarino  
* (baidupan) bluetoothchat_v1.rar    
* (baidupan) amarino_v8_understand_send_recv_place.rar  
* (baidupan) amarino_v9_bluetooth_chat.rar, with amarino and android-BluetoothChat projects    
* see https://github.com/googlesamples/android-BluetoothChat  
But you should modify MY_UUID_SECURE to SPP UUID : 00001101-0000-1000-8000-00805F9B34FB  
https://blog.csdn.net/chy555chy/article/details/52193659  
https://github.com/googlesamples/android-BluetoothChat/pull/30/files  
* search baidupan, HC05指令集.pdf  

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

## GPIO扩展元件  
* 74HC595是串转并8位输出，纯数字电路  
* 74HC4051是多路复用，数模混合电路  
* MCP23017是I2C扩展GPIO，纯数字电路（常用于树莓派等） ????  

## Mixly, 米思齐  
http://mixly.org  

## MakerPanda  
http://wiki.makerpanda.cc  

## makeblock  
https://www.makeblock.com  
https://www.makeblock.com/cn  
https://github.com/Makeblock-official/mBlock  
https://shop126831728.world.taobao.com  
http://learn.makeblock.com/cn/makeblock-app/  

## 柴火创客教育, from seeedstudio taobao arduino uno r3      
http://chmakered.com/down.html  
Codecraft (base on Scratch 3.0), Match up  

## DT830  
数字万用表  

## hexagon5un/AVR-Programming  
https://github.com/hexagon5un/AVR-Programming  

## PCB  
https://jk.jiepei.com  
https://www.jdbpcb.com  
https://www.jiepei.com/faq/294.html  
CAD別ガーバーデータ出力手順  
https://unicraft-jp.com/gerberdata/  
PCBE  
https://www.vector.co.jp/soft/winnt/business/se056371.html  

## 4.3inch  
SSD1963  
RA8875  
https://www.amobbs.com/thread-5575225-1-1.html?_dsign=cd43ec12  
https://github.com/adafruit/Adafruit-RA8875-Breakout-Board-PCB  

## 硬件hacker!用digispark制作BadUSB  
https://www.jianshu.com/p/2a3475f46570  

## 3rd-party boards  
https://github.com/arduino/Arduino/wiki/Unofficial-list-of-3rd-party-boards-support-urls  

## PSP Display, LQ043T3DX02  
https://github.com/Hyvok/PSP-Display-Driver  

## LQ043T3DX02  
https://github.com/wellrun/bomei_Camera/tree/master/platform/firmware/Drivers/SourceCode/lcd  

## gcbasic  
https://sourceforge.net/projects/gcbasic/  
picbasic  
http://store.melabs.com/cat/PBP.html  

## mind+  
http://mindplus.cc  

## 趣讨教  
https://www.qutaojiao.com  

## LattePanda 之深入学习 Firmata通讯  
https://www.cnblogs.com/sjqlwy/p/lattepanda_firmata.html  
https://github.com/firmata/protocol  

## AVRDUDE AVR ISP 工具 源码 研究  
https://blog.csdn.net/wowocpp/article/details/80717866  
avrdudess  

## st7789 in alios things  
https://github.com/alibaba/AliOS-Things/blob/master/board/starterkit/aos/st7789.c  
https://github.com/alibaba/AliOS-Things/blob/master/board/developerkit/aos/st7789.c  

## DIY 6502/W65C02小单板机 - 刚点了个闪烁灯  
https://www.mydigit.cn/forum.php?mod=viewthread&tid=23347  

## 为什么当年 FC 的硬件那么容易就被山寨成小霸王？  
http://ju.outofmemory.cn/entry/76616  

## ardupilot  
https://github.com/ArduPilot/ardupilot  

## DIY PCB电路板制作（简单方便快捷）  
https://www.cnblogs.com/yuyuanfeng/p/6344979.html  

## Arduboy2  
https://github.com/harbaum/Arduboy2  

## DIY Clones done in KiCAD  
https://github.com/aspro648/Arduino  

## SMD贴片蜂鸣器HN1305B 3V 5V 12V 连续声 有源蜂鸣器  
smd buzzer  
江苏华能电子 蜂鸣器 厂家  

## Micro Kernel / Bootloader for Ben Eater's 6502 Computer  
https://github.com/janroesner/sixty5o2  
Build a 6502 computer  
https://eater.net/6502  

## 自制5v和3.3v大功率输出独立电源  
我找到第三种方法可以得到3.3V和5V稳定杜邦线输出的大功率电源  
（普通电池无法驱动树莓派等非低功率单片机，除非背靠背8节电池组），  
方法是多路电压转换模块+DC接口电池扣+9v电池。  
除了这种方法以外，我还想到两种办法，第一种办法是自制2节18650充电宝+st-link v2；  
第二种办法需要自己用洞洞板焊接，用焊锡飞线，把电池扣焊接在并联的AMS1117-3.3V和AMS1117-5V模块  
（先把9v降压到5v，再降压到3.3v），再用拨动开关控制电源开关  

## ESP32, INMP441  
* search baidupan, INMP441_v1.rar    
* inmp441:   
LR,WS,SCK  
RRRRRxxxxxx[===]  
GND,VDD,SD  
* INMP441<->ESP32  
SCK(left top 1)<->GPIO14(left bottom 8)  
SD(right top 1)<->GPIO32(left top 7)  
WS(left top 2)<->GPIO15(right bottom 4)  
VDD(right top 2)<->3.3(left top 1)  
L/R(left top 3)<->GND(right top 1 or INMP441 GND)  
GND(right top 3)<->GND(right top 1 or L/R)  
* esp32 burn:  
GPIO0(right down 5)<->GND(left down 5)  

## VGA, waveshare VGA PS2 Board + Blue Pill  
a) Blue Pill (STM32F103C8T6, VCC-GND, 源地工作室)  
PA9<->VGAHS  
PB6<->VGAVS  
PC13<->B  
PC14<->G  
PC15<->R  
GND<->GND  
https://www.waveshare.net/wiki/VGA_PS2_Board  
https://github.com/RoCorbera/BlueVGA  
search baidupan, BlueVGA_hello_v3.rar   

## PS2 Keyboard, waveshare VGA PS2 Board + Uno  
a) Uno  
https://github.com/PaulStoffregen/PS2Keyboard  
http://www.pjrc.com/teensy/td_libs_PS2Keyboard.html  
VCC<->5V(or 3V3)  
GND<->GND  
PS2D<->4(DATA)  
PS2CLK<->3(IRQ)  
search baidupan, ps2keyboard_v2.rar  

## nucleo-f446re, stm32f446, inmp441, sai    
* nucleo-f446-ei-kws_v2_sai_success.rar  
* 串口不用接，uart2口的RX，TX（对应板右侧的TX/D1,RX/D0）不要接在针脚上，默认被连接到st-link的虚拟串口上  
usart2, TX, PA2(not need)==>TX/D1  
usart2, RX, PA3(not need)==>RX/D0  
https://blog.csdn.net/liveas/article/details/40559323  
* INMP441  
SCK,WS,LR  
[===]xxxxxxRRRRR  
SD,VDD,GND  
* INMP441<->STM32F446  
SCK(left top 1)<->SAI1_SCK_B, PB12 (right 3 top 8)  
SD(right top 1)<->SAI1_SD_B, PA9 (D8, right 1 top 10)  
WS(left top 2)<->SAI1_FS_B, PB9 (right 2 top 3)  
VDD(right top 2)<->3.3(left 3 top 4)   
L/R(left top 3)<->GND  
GND(right top 3)<->GND(left 3 top 7)  

## stm32f446re, inmp441, i2s  
usb-microphone_v5_solve_printf_block_main_thread.rar  
INMP441<->STM32F446  
SCK(left top 1)<->I2S1_CK, PB3 (D3, right 2 bottom 4)  
SD(right top 1)<->I2S1_SD, PA7 (D11, right 1 top 7)  
WS(left top 2)<->I2S1_WS, PA4 (left 2 bottom 4)  
VDD(right top 2)<->3.3(left 3 top 4)  
L/R(left top 3)<->GND  
GND(right top 3)<->GND(left 3 top 7)  

## stm32h743zit6, NUCLEO-H743ZI2, inmp441, sai  
h743_inmp441_v2_stm32h743_sai_overclock.rar  
h743_inmp441_v1_stm32h743_sai_no_overclock.rar  
INMP441<->STM32H743  
SCK(left top 1)<->SAI1_SCK_B, PF8 (left 4 bottom 4)  
SD(right top 1)<->SAI1_SD_B, PE3 (left 4 bottom 5)  
WS(left top 2)<->SAI1_FS_B, PF9 (left 4 bottom 2)  
VDD(right top 2)<->3.3(left 3 top 4)  
L/R(left top 3)<->GND  
GND(right top 3)<->GND(left 3 top 7)  

## raspberry pi pico, rp2040, MAX9814 and PDM Mic (mems microphone)  
* https://github.com/sandeepmistry/pico-microphone  
* msys_v11_raspberry_pi_pico_v1.rar  
* MAX9814, adc mic  
GND(right 3)<->GND  
3V3(right 5)<->Vdd  
Vdd<->GAIN  
GPIO 26(right 10)<->OUT  
NC<->AR  
* PDM Mic (GC-2 94V-0, MP34DT01 PDM MEMS Microphone, not good)  
GPIO 2(left 4)<->DAT  
GPIO 3(left 5)<->CLK  
3V(self)<->SEL(self) (why???, not good)  
GND(right 3)<->GND  
SEL(self)<->3V(self) (why???, not good)  
* M5Stack PDM Mic (good)  
GPIO 3(left 5)<->CLK  
GPIO 2(left 4)<->DAT  
3V3(right 5)<->5V  
GND(right 3)<->GND  

## CH9350 / CH9350L usb keyboard host, hid (usb) to uart (serial), hid2uart (usb2uart)    
search baidupan, CH9350L_sscom_01.txt  
通过usb host读取USB HID键盘键值，然后转4线串口的方法，网上有一种做法是通过CH9350L或者CH9350来实现。  
这个芯片的串口协议需要查资料，我查过和用sscom测试过（我用的是润和Neptune开发板+键盘HID套装）  
大概是这样子：CH9350L会不断发送57 AB 82 A3（波特率115200），夹杂键值16进制数据，可以通过接收  
57 AB 12 00 00 00 00 FF 80 00 20来关闭（也可以不关闭）。如果键盘按键按下（不包括键盘按键弹起），  
例如a，会发送一段16进制数据57 AB 88 0B 10 00 00 04 00 00 00 00 00 16 1A （一共15个字节），  
其中第8个字节04是a的键盘码  
