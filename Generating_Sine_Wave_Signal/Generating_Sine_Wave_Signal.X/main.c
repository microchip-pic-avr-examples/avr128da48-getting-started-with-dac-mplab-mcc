/*
    (c) 2021 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include <math.h>
#include <util/delay.h>

/* Number of steps for a sine wave period */
#define SINE_WAVE_STEPS                  (100)
/* Sine wave amplitude is (1024/2) - 1 */
#define SINE_AMPLITUDE                   (511)
/* Sine wave DC offset is 1024/2 (10bit DAC) */
#define SINE_DC_OFFSET                   (512)
/* 2*PI */
#define M_2PI                            (2 * M_PI)
/* Frequency of the sine wave */
#define OUTPUT_FREQ                      (50)
/* Step delay for the synthesis loop */
#define STEP_DELAY_MICROS                ((1000000 / OUTPUT_FREQ) / SINE_WAVE_STEPS)

/* Buffer to store the sine wave samples */
uint16_t sineWave[SINE_WAVE_STEPS];

void sineWaveInit(void)
{
    for(uint16_t i = 0; i < SINE_WAVE_STEPS; i++)
    {
        sineWave[i] = SINE_DC_OFFSET + SINE_AMPLITUDE * sin(i * M_2PI / SINE_WAVE_STEPS);
    }
}

int main(void)
{
    uint16_t i = 0;
    
    /* Initializes MCU, drivers and middle-ware */
    SYSTEM_Initialize();
    sineWaveInit();

    while (1)
    {
        DAC0_SetOutput(sineWave[i++]);
        i = i % SINE_WAVE_STEPS;
        _delay_us(STEP_DELAY_MICROS);
    }
}
/**
    End of File
*/