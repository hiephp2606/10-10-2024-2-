    #include <Arduino.h>
    #include "LED.h"
    #include <OneButton.h>

    LED led(LED_PIN, LED_ACT);

    void btnPush();
    void btnHold();
    OneButton button(BTN_PIN, !BTN_ACT);

    void btnPush()
    {
        led.flip();
    }

    void btnDoubleClick()
    {
        led.blink(200);
    }
    void setup()
    {
        led.off();
        button.attachClick(btnPush);
        button.attachDoubleClick(btnDoubleClick);
    }

    void loop()
    {
        led.loop();
        button.tick();
    }

