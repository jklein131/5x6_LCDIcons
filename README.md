# 5x6_LCDIcons
5 by 6 icons for arduino LCD displays
```
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
byte pound[] = {
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
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11111,             //█████
  B11011,             //██ ██
  B10001              //█   █
};     
const byte whitebookmark[] = {
  B11111,             //█████
  B11111,             //█   █
  B11111,             //█   █
  B11111,             //█   █
  B11111,             //█   █
  B11111,             //█ █ █
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
cont byte newwindow[] = {
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
const byte arrow left[] = {
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
```
