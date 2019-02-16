
#include <mgos_gpio.h>
#include <mgos_system.h>

static const uint8_t D0   = 16;

void openDoor1(){
    mgos_gpio_write(D0, 0);
    mgos_msleep(500);
    mgos_gpio_write(D0, 1);
}

extern "C" {
  void openDoor(){
    openDoor1();
    mgos_msleep(500);
    openDoor1();
    mgos_msleep(500);
    openDoor1();
  }
}
