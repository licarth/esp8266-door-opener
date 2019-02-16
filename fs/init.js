load("api_config.js");
load("api_rpc.js");
load("api_timer.js");
load("api_gpio.js");

let D0 = 16;

GPIO.setup_output(D0, 1);

let openDoor = ffi("void *openDoor()");

print("NEW NEW firmware !")

RPC.addHandler("Door.Open", function(args) {
  print("Opening door :) ...");
  openDoor();
  return;
});
