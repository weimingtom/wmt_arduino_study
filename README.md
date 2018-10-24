# wmt_arduino_study
My Arduino Uno study

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
(baidupan) search Demo_1_stm32vldiscovery_oled12864_ssd1306.rar  
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

## Debugger Dirvers  
* jlink  

## user manual  
http://www.nongnu.org/avr-libc/user-manual/FAQ.html#faq_cplusplus  

## mp3  
ATJ2085  

## 2位共阳极数码管  
(baidupan) digital_two_v1.rar  

## ATmega8  
https://github.com/MCUdude/MiniCore  

## raspberrypiwiki  
http://www.raspberrypiwiki.com/index.php/Arduino  


