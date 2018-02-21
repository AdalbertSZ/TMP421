// ================================================================== ESP32_TMP421.h ==
// Plik:	ESP32_TMP421.h
// Wersja:	0.1
// Opis:	Biblioteka obsługująca czujnik temperatury TMP421.
//
// Licence:	Wojciech Szajnerman (w.szajnerman@gmail.com)
//
//			Permission is hereby granted, free of charge, to any person obtaining 
//			a copy of this software and associated documentation files (the 
// 			"Software"), to deal in the Software without restriction, including 
//			without limitation the rights to use, copy, modify, merge, publish, 
//			distribute, sublicense, and/or sell copies of the Software, and to permit 
//			persons to whom the Software is furnished to do so, subject to the 
//			following conditions: This permission notice shall be included in all 
//			copies or  substantial portions of the Software.
//
//			THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//			OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//			FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
//			THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//			LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//			FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
//			DEALINGS IN THE SOFTWARE.
//
// Data:	21.02.2018
// Autor:	Copyright (c) 2018 Wojciech Szajnerman
// ==================================================================== ESP_TMP421.h ==

#include "Arduino.h"

#ifndef _ESP32_TMP421_H
	#define _ESP32_TMP421_H


	// ~~~~ Blok śledzenia ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	#define DEBUG_PRINTER					Serial

	#ifdef TMP421_DEBUG
			#define DEBUG_PRINT(...)		{ DEBUG_PRINTER.print(__VA_ARGS__);   }
			#define DEBUG_PRINTLN(...)		{ DEBUG_PRINTER.println(__VA_ARGS__); }
		#else
			#define DEBUG_PRINT(...)		{}
			#define DEBUG_PRINTLN(...)		{}
	#endif

	// ~~~~ klasa TMP421 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	class TMP421 {

		public:
			TMP421();
			~TMP421();

			uint8_t address(void)  const { return _i2cAddress; }
			uint8_t error(void)    const { return _error;      }

		private:
			// zmienne systemowe
			uint8_t _i2cAddress;
			uint8_t _error;
			
	};

#endif

// =========================================================== end of ESP32_TMP421.h ==