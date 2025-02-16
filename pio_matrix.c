#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "pico/bootrom.h"
#include "pio_matrix.pio.h" 
#include "init_GPIO.h"//biblioteca que inicializa teclado e o botao
#include "frames.h"//biblioteca com os frames
#include "config_leds.h"//biblioteca com a config dos leds

//Debounce (em milissegundos)
#define DEBOUNCE_TIME 150

//função principal
int main()
{
    // Inicializa todos os códigos stdio padrão que estão ligados ao binário.
    stdio_init_all();
    init_GPIO();
    
    PIO pio = pio0; 
    uint32_t valor_led;
    double r = 0.0, b = 0.0 , g = 0.0; 
    bool ok;
    ok = set_sys_clock_khz(128000, false);//coloca a frequência de clock para 128 MHz, facilitando a divisão pelo clock    

    //configurações da PIO
    uint offset = pio_add_program(pio, &pio_matrix_program);
    uint sm = pio_claim_unused_sm(pio, true);
    pio_matrix_program_init(pio, sm, offset, OUT_PIN);

    while (true) 
    {
        if(!gpio_get(BTN_A) && (!gpio_get(BTN_B))){
            setar_leds_verde(letraI_frame, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);
            setar_leds_verde(letraF_frame, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);
            setar_leds_verde(letraP_frame, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);
            setar_leds_verde(letraI_frame, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);


        }
        else if(!gpio_get(BTN_A)){
            setar_leds_azul(forma_circular_frame, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);
            setar_leds_roxo(forma_losango_frame, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);
            setar_leds_ciano(forma_triangulo_frame, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);
            setar_leds_amarelo(forma_triangulo_frame_noveta_graus, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);

        }
        else if(!gpio_get(BTN_B)){
            setar_leds_vermelho(tecla1_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);

            setar_leds_arcoiris(tecla2_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(2000);



        }
        else if(!gpio_get(JSTICK)){
            reset_usb_boot(0, 0);
        }
        else{
            setar_leds_todas_cores(teclaA_frame, valor_led, pio, sm, r, g, b);
        }
        //tempo de debounce para o botão
        sleep_ms(DEBOUNCE_TIME);
        printf("\nfrequência de clock %ld\r\n", clock_get_hz(clk_sys));
    }
}
