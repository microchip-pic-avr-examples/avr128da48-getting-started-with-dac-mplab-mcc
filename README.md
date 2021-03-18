[![MCHP](images/microchip.png)](https://www.microchip.com)

# Getting Started with Digital-to-Analog Converter (DAC) Examples (MPLAB® X)

This repository contains examples of MCC-generated source code for Digital-to-Analog Converter (DAC) as described in the [TB3210-Getting Started with Digital-to-Analog Converter (DAC)](http://ww1.microchip.com/downloads/en/Appnotes/TB3210-Getting-Started-with-DAC-DS-90003210.pdf) document from Microchip. The repository contains three MPLAB® X projects inside:

* [<strong>Generating Constant Analog Signal:</strong>](Generating_Constant_Analog_Signal) This use case shows how to use the DAC to generate a constant analog signal on an output pin (for more details, see [<strong>Generating Constant Analog Signal</strong>](Generating_Constant_Analog_Signal))
* [<strong>Generating Sine Wave Signal:</strong>](Generating_Sine_Wave_Signal) This use case shows how to use the DAC to generate a sine wave signal (for more details, see [<strong>Generating Sine Wave Signal</strong>](Generating_Sine_Wave_Signal))
* [<strong>Reading DAC Internally with ADC:</strong>](Reading_DAC_Internally_with_ADC) This use case shows how to use the DAC to generate an output voltage internally (no pin involved). The ADC will read the value. The DAC voltage output will increment by one step every iteration (for more details, see [<strong>Reading DAC Internally with ADC</strong>](Reading_DAC_Internally_with_ADC))

## Related Documentation
More details and code examples on the AVR128DA48 can be found at the following links:
- [TB3210-Getting Started with Digital-to-Analog Converter (DAC)](http://ww1.microchip.com/downloads/en/Appnotes/TB3210-Getting-Started-with-DAC-DS-90003210.pdf)
- [AVR128DA48 Product Page](https://www.microchip.com/wwwproducts/en/AVR128DA48)
- [AVR128DA48 Code Examples on GitHub](https://github.com/microchip-pic-avr-examples?q=avr128da48)
- [AVR128DA48 Project Examples in START](https://start.atmel.com/#examples/AVR128DA48CuriosityNano)


## Software Used
- MPLAB® X IDE 5.40 or newer [(microchip.com/mplab/mplab-x-ide)](http://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® XC8 2.30 or a newer compiler [(microchip.com/mplab/compilers)](http://www.microchip.com/mplab/compilers)
- MPLAB® Code Configurator (MCC) 4.0.1 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Code Configurator (MCC) Device Libraries 8-bit AVR® MCUs 2.7.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- AVR-Dx 1.6.88 or newer Device Pack


## Hardware Used
- AVR128DA48 Curiosity Nano [(DM164151)](https://www.microchip.com/Developmenttools/ProductDetails/DM164151)
