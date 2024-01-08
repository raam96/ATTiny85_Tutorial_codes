#include "DigiKeyboard.h"

void setup() {
  // Nothing to set up
}

void loop() {
  // Wait for the computer to recognize the ATtiny85
  DigiKeyboard.delay(500);

  // Send Win + R to open the Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  // Wait for the Run dialog to open
  DigiKeyboard.delay(100);

  // Type "powershell" and press Enter to open PowerShell
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(100);

  // change directory
  DigiKeyboard.print("cd C:/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(100);

  // Type the PowerShell script to change console mode and color
  DigiKeyboard.print("color 0a");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Type the PowerShell script to change console mode and color
  DigiKeyboard.print("tree");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);



  // Wait for the script to run
  DigiKeyboard.delay(100000);
}
