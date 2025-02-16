#ifndef CONFIG_LEDS_H  // Guardas de inclusão
#define CONFIG_LEDS_H

#include "pico/stdlib.h"
#include "pio_matrix.pio.h"

#define NUM_PIXELS 25

uint32_t matrix_rgb(double b, double r, double g)
{
  unsigned char R, G, B;
  R = r * 255;
  G = g * 255;
  B = b * 255;
  return (G << 24) | (R << 16) | (B << 8);
}

//rotina para acionar a matrix de leds - ws2812b
void setar_leds_todas_cores(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){

    for (int16_t i = 0; i < NUM_PIXELS; i++) {
            //a ordem é b, r, g
            valor_led = matrix_rgb(desenho[24-i], desenho[24-i], desenho[24-i]);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
}
void setar_leds_vermelho(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){

    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        
            valor_led = matrix_rgb(b=0.0, desenho[24-i], g=0.0);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
}
void setar_leds_verde(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){

    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        
            valor_led = matrix_rgb(b=0.0, r=0.0, desenho[24-i]);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
}
void setar_leds_azul(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){

    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        
            valor_led = matrix_rgb(desenho[24-i], r=0.0, g=0.0);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para criar um efeito gradiente roxo
void setar_leds_roxo(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(desenho[24-i], desenho[24-i], 0.0);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para criar um efeito gradiente ciano
void setar_leds_ciano(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(desenho[24-i], 0.0, desenho[24-i]);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para criar um efeito gradiente amarelo
void setar_leds_amarelo(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(0.0, desenho[24-i], desenho[24-i]);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para criar um efeito arco-íris
void setar_leds_arcoiris(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        int pos = i % 6;
        switch(pos) {
            case 0: // Vermelho
                valor_led = matrix_rgb(0.0, desenho[24-i], 0.0);
                break;
            case 1: // Laranja
                valor_led = matrix_rgb(0.0, desenho[24-i], desenho[24-i] * 0.5);
                break;
            case 2: // Amarelo
                valor_led = matrix_rgb(0.0, desenho[24-i], desenho[24-i]);
                break;
            case 3: // Verde
                valor_led = matrix_rgb(0.0, 0.0, desenho[24-i]);
                break;
            case 4: // Azul
                valor_led = matrix_rgb(desenho[24-i], 0.0, 0.0);
                break;
            case 5: // Roxo
                valor_led = matrix_rgb(desenho[24-i], desenho[24-i], 0.0);
                break;
        }
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

#endif