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
* ZHONGBEST OLED 12864, i2c, 4 pins  
for Arduino  
https://gitee.com/weimingtom/arduboymod/blob/master/Adafruit_SSD1306.h  
(baidupan) search ssd1306_128x32_i2c.ino  

* ZHONGBEST OLED 12864, i2c, 4 pins  
for stm32vldiscovery  
https://github.com/thaletterb/STM32-SSD1306-128x64-I2C  
#define I2C_TIMEOUT 100000  
->  
#define I2C_TIMEOUT 200000  
(baidupan) search Demo_1_stm32vldiscovery_oled12864_ssd1306.rar  

* ZHONGBEST OLED 12864, i2c, 4 pins  
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

* Arduino OLED 单色 白色 屏幕模块 0.96寸 SPI接口 12864  
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

## LCD  
* https://github.com/SGBotic/LCD-GUI-Library  
