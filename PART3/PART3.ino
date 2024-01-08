#include <DigiKeyboard.h>

void setup() {
  // Nothing to set up
}

void loop() {
  // Wait for the computer to recognize the ATtiny85
  DigiKeyboard.delay(500);

  // Send Win + R to open the Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  // Wait for the Run dialog to open
  DigiKeyboard.delay(1000);

  // Type the URL for YouTube and press Enter
  DigiKeyboard.print("https://www.youtube.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // End the program
  DigiKeyboard.delay(90000);
}
