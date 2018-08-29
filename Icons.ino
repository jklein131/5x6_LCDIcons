//designed on https://maxpromer.github.io/LCD-Character-Creator/ 
const byte valve[8] = {
  B00000,             //
  B01110,             // ███
  B00100,             //  █
  B00100,             //  █
  B11111,             //█████
  B11111,             //█████
  B00000,             //
};
const byte flow[8] = {
  B00100,             //  █
  B00100,             //  █
  B01110,             // ███
  B01110,             // ███
  B11111,             //█████
  B11111,             //█████
  B01110,             // ███
};
const byte networkupload[8] = {
  B00100,             //  █
  B01110,             // ███
  B10101,             //█ █ █
  B00100,             //  █
  B00100,             //  █
  B10001,             //█   █
  B11111,             //█████
};
const byte networkdownload[8] = {
  B00100,             //  █
  B01110,             //  █ 
  B10101,             //█ █ █
  B00100,             // ███
  B00100,             //  █
  B10001,             //█   █
  B11111,             //█████
};
const byte networkimport[] = {
  B10000,             //█
  B01001,             // █  █
  B00101,             //  █ █
  B00011,             //   ██
  B01111,             // ████
  B00000,             //
  B10001,             //█   █             
  B11111              //█████
};
const byte networkexport[] = {
  B01111,             // ████
  B00011,             //   ██
  B00101,             //  █ █
  B01001,             // █  █
  B10000,             //█                         
  B00000,             //             
  B10001,             //█   █
  B11111              //█████
};
const byte networkcheck[] = {
  B00000,             //
  B00000,             //
  B00000,             //
  B00001,             //    █
  B01010,             // █ █
  B00100,             //  █
  B10001,             //█   █
  B11111              //█████
};
const byte refresh[] = {
  B00010,             //   █
  B11111,             //█████
  B10010,             //█  █
  B10000,             //█
  B00001,             //    █
  B01001,             // █  █
  B11111,             //█████
  B01000              // █
};
const byte phone[] = {
  B00000,             //
  B00000,             //
  B11111,             //█████
  B10001,             //█   █
  B00100,             //  █
  B01110,             // ███
  B11111,             //█████
  B11111              //█████
};
const byte usb[] = {
  B00100,             //  █
  B01110,             // ███
  B00100,             //  █
  B00101,             //  █
  B10101,             //█ █ █
  B10110,             //█ ██
  B01100,             // ██
  B00100              //  █
};
const byte serial[] = {
  B01100,             // ██
  B11010,             //██ █
  B10101,             //█ █ █
  B11001,             //██  █
  B10101,             //█ █ █
  B11001,             //██  █
  B10110,             //█ ██
  B01100              // ██
};
const byte plug[] = {
  B00010,             //   █
  B00010,             //  █
  B00100,             //  █
  B00100,             //  █
  B01110,             // ███
  B11111,             //█████
  B01010,             // █ █
  B00000              // 
};
const byte plug1[] = {
  B00100,             //  █
  B00100,             //  █
  B01110,             // ███
  B11111,             //█████
  B01010,             // █ █
  B00000,             //
  B00000,             //
  B11111              //█████
};
const byte plug2[] = {
  B00010,             //   █
  B00100,             //  █
  B00100,             //  █
  B01110,             // ███
  B11111,             //█████
  B01010,             // █ █
  B00000,             //
  B11111              //█████
};
const byte plug3[] = {
  B00001,             //    █
  B00010,             //   █
  B00100,             //  █
  B00100,             //  █
  B00100,             //  █
  B01110,             // ███
  B11111,             //█████
  B11111              //█████
};
const byte battery1[8] = {
  B01110,             // ███
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B11111,             //█████
};
const byte battery2[8] = {
  B01110,             // ███
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B11111,             //█████
  B11111,             //█████
};
const byte battery3[8] = {
  B01110,             // ███
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
};
const byte battery4[8] = {
  B01110,             // ███
  B10001,             //█   █
  B10001,             //█   █
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
};
const byte battery5[8] = {
  B01110,             // ███
  B10001,             //█   █
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
};
const byte battery6[8] = {
  B01110,             // ███
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
};
const byte batterydisabled[8] = {
  B01110,             // ███
  B10001,             //█   █
  B11011,             //██ ██
  B10101,             //█ █ █
  B11011,             //██ ██
  B10001,             //█   █
  B11111,             //█████
};
byte batterywarning[] = {
  B01110,             // ███
  B10001,             //█   █
  B10101,             //█ █ █
  B10101,             //█ █ █
  B10001,             //█   █
  B10101,             //█ █ █
  B10001,             //█   █
  B11111              //█████
};
const byte smileyface[8] = {
  B00000,             //
  B00000,             //  
  B01010,             // █ █
  B00000,             //
  B10001,             //█   █
  B01110,             // ███ 
  B00000              //     
};
const byte yen[] = {
  B10001,             //█   █
  B01010,             // █ █
  B00100,             //  █
  B11111,             //█████
  B00100,             //  █
  B11111,             //█████
  B00100,             //  █
  B00100              //  █
};
const byte pound[] = {
  B00110,             //  ██
  B01001,             // █  █
  B01000,             // █
  B01000,             // █
  B11100,             //███
  B01000,             // █
  B10000,             //█
  B11111              //█████
};
const byte pause[] = {
  B00000,             //
  B00000,             //
  B11011,             //██ ██
  B11011,             //██ ██
  B11011,             //██ ██
  B11011,             //██ ██
  B00000,             //
  B00000              // 
};
const byte play[] = {
  B10000,             //█
  B11000,             //██
  B11100,             //███ 
  B11110,             //████
  B11100,             //███ 
  B11000,             //██
  B10000,             //█
  B00000              //
};
const byte skip[] = {
  B10001,             //█   █
  B11001,             //██  █
  B11101,             //███ █ 
  B11111,             //█████
  B11101,             //███ █
  B11001,             //██  █
  B10001,             //█   █
  B00000              //
};
const byte eject[] = {
  B00000,             //
  B00000,             //  █
  B11011,             // ███ 
  B11011,             //█████
  B11011,             //     
  B11011,             //█████
  B00000,             //
  B00100              //
};
const byte bell[] = {
  B00000,             //  
  B01110,             // ███
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████    
  B11111,             //█████
  B00100,             //  █
  B00000              //
};
const byte bookmark[] = {
  B11111,             //█████
  B11111,             //█   █
  B11111,             //█   █
  B11111,             //█   █
  B11111,             //█   █
  B11111,             //█ █ █
  B11011,             //██ ██
  B10001              //█   █
};   
const byte darkbookmark[] = {
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11011,             //██ ██
  B10001              //█   █
};     

const byte file[] = {
  B01111,             // ████
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B11111              //█████
}; 
const byte filebroken[] = {
  B01111,             // ████
  B10001,             //█   █
  B11011,             //██ ██
  B10101,             //█ █ █
  B11011,             //██ ██
  B10001,             //█   █
  B10001,             //█   █
  B11111              //█████
}; 
const byte filewarning[] = {
  B01111,             // ████
  B10001,             //█   █
  B10101,             //█ █ █
  B10101,             //█ █ █
  B10001,             //█   █
  B10101,             //█ █ █
  B10001,             //█   █
  B11111              //█████
}; 
const byte sdcard[] = {
  B11110,             //████
  B10101,             //█ █ █
  B10101,             //█ █ █
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111              //█████
};
const byte floppydisk[] = {
  B11110,             //████
  B10011,             //█  ██
  B10001,             //█   █
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B10001,             //█   █
  B10001              //█   █
};
const byte heart[] = {
  B00000,             //
  B01010,             // █ █
  B11111,             //█████
  B11111,             //█████
  B01110,             // ███
  B01110,             // ███
  B00100,             //  █
  B00000              //
};
const byte flash[] = {
  B00001,             //    █
  B00010,             //   █
  B00100,             //  █
  B01000,             // █
  B11110,             //████
  B00010,             //   █
  B00100,             //  █
  B01000              // █
};
const byte paperclip[] = {
  B01110,             // ███
  B10000,             //█   
  B10010,             //█  █
  B10101,             //█ █ █
  B10101,             //█ █ █
  B10101,             //█ █ █
  B10001,             //█   █
  B01110              // ███
};
const byte link[] = {
  B01110,             // ███
  B10000,             //█   
  B10110,             //█ ██             
  B10001,             //█   █
  B01101,             // ██ █
  B00001,             //    █
  B10001,             //█   █
  B01110              // ███
};
const byte popsicle[] = {
  B01110,             // ███
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B11111,             //█████
  B00100,             //  █
  B00100              //  █
};
const byte darkpopsicle[] = {
  B01110,             // ███
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B00100,             //  █
  B00100              //  █
};
const byte resizediagonal[] = {
  B00101,             //  █ █
  B00110,             //  ██ 
  B00111,             //  ███
  B00000,             //
  B00000,             //
  B11100,             //███ 
  B01100,             // ██
  B10100              //█ █
};
const byte resizevertical[] = {
  B00100,             //  █
  B01110,             // ███
  B10101,             //█ █ █
  B00100,             //  █
  B00100,             //  █
  B10101,             //█ █ █
  B01110,             // ███
  B00100              //  █
};
const byte back[] = {
  B00000,             //
  B00100,             //  █                      
  B00010,             //   █           
  B11111,             //█████
  B10010,             //█  █
  B10100,             //█ █
  B10000,             //█
  B11111              //█████
};
const byte newwindow[] = {
  B00111,             //  ███
  B00011,             //   ██
  B10101,             //█ █ █
  B10000,             //█
  B10001,             //█   █
  B10001,             //█   █
  B10001,             //█   █
  B11111              //█████
};
const byte arrowup[] = {
  B00100,             //  █
  B01110,             // ███
  B10101,             //█ █ █
  B00100,             //  █
  B00100,             //  █
  B00100,             //  █
  B00100,             //  █
  B00100              //  █
};
const byte arrowdown[] = {
  B00100,             //  █
  B00100,             //  █  
  B00100,             //  █
  B00100,             //  █
  B00100,             //  █
  B10101,             //█ █ █
  B01110,             // ███
  B00100              //  █
};
const byte arrowright[] = {
  B00000,             //
  B00100,             //  █
  B00010,             //   █
  B11111,             //█████
  B11111,             //█████
  B00010,             //   █
  B00100,             //  █
  B00000              //
};
const byte arrowleft[] = {
  B00000,             //
  B00100,             //  █
  B01000,             // █
  B11111,             //█████
  B11111,             //█████             
  B01000,             // █
  B00100,             //  █
  B00000              //
};
const byte magnet[] = {
  B00000,             //
  B11011,             //██ ██
  B00000,             //
  B11011,             //██ ██
  B11011,             //██ ██
  B11111,             //█████
  B01110,             // ███
  B00000              //
};

#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h> // i2c expander i/o class header

// Set the LCD address to 0x27 in PCF8574 by NXP and Set to 0x3F in PCF8574A by Ti
//lcd info 
const int LCD_ROWS = 2;
const int LCD_COLS = 16;
const char * lcdnull = "                "; //16 spaces
hd44780_I2Cexp lcd[16]; // auto locate & configure up to 16 displays
int NumLcd;		// number of LCD displays found.

//bytes
const byte * x[] = {valve,
            flow,
            networkupload,
            networkdownload,
            networkimport,
            networkexport,
            networkcheck,
            refresh,
            phone,
            usb,
            serial,
            plug,
            plug1,
            plug2,plug3,
            battery1,
            battery2,
            battery3,
            battery4,
            battery5,
            battery6,
            batterydisabled,
            batterywarning,
            smileyface,
            yen,
            pound,
            pause,
            play,
            skip,
            eject,
            bell,
            bookmark,
            darkbookmark,
            file,
            filebroken,
            filewarning,
            sdcard,
            floppydisk,
            heart,
            flash,
            paperclip,
            link,
            popsicle,
            darkpopsicle,
            resizediagonal,
            resizevertical,
            back,
            newwindow,
            arrowup,
            arrowdown,
            arrowright,
            arrowleft,
            magnet
            };
void startLCD() {
  /*
	 * Locate all the displays by attempting to intialize each one
	 */
	for(NumLcd = 0; NumLcd < 16; NumLcd++)
	{
		/*
		 * If begin fails, then assume we have no more displays
		 */
		if(lcd[NumLcd].begin(LCD_ROWS, LCD_COLS) != 0)
			break;
	}
	if(NumLcd == 0)
	{
		// no LCD devices found, blink the onboard LED if possible

		Serial.println("error no LCD");
	}

	for(int n = 0; n < NumLcd; n++)
	{

		/*
		 * Label the display with its instance number
		 * and i2c address
		 */
		lcd[n].setCursor(0, 0);
		lcd[n].print("LCD:");
		lcd[n].print(n);

		lcd[n].print(" (0x");
		lcd[n].print(lcd[n].getProp(hd44780_I2Cexp::Prop_addr), HEX);
		lcd[n].print(")");
	}
}  
void setup() {
  startLCD();
  
  

  
}

void loop() {
  int i = 0;
  int chari = 0; 
  for(i=0;i < sizeof(x); i++) {
      for(int n = 0; n < NumLcd; n++)
    	{
          lcd[n].createChar(chari, x[i]);
          lcd[n].write(chari);
    	}
      chari++;
      if(chari == 8) {
        chari =0;
      }
      
      delay(500);
      if(i%16 == 0) {
          lcd[0].home(); 
      }
  }
}
