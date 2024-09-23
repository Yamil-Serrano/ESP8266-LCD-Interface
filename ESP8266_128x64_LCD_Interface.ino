#include <U8g2lib.h>

// Initialize the ST7920 128x64 LCD screen in SPI Mode
U8G2_ST7920_128X64_F_SW_SPI u8g2(U8G2_R0, /* clock=*/ 14, /* data=*/ 13, /* CS=*/ 15, /* reset=*/ U8X8_PIN_NONE);

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  showProgressBar();
  
  // Display completion message
  u8g2.clearBuffer(); // Clear the buffer before drawing the final message
  u8g2.setFont(u8g2_font_lubB08_tr);
  u8g2.setCursor(0, 10);
  u8g2.print("My Interface");

  u8g2.setFont(u8g2_font_ncenB08_tr);
  u8g2.setCursor(0, 60);
  u8g2.print("Status: Completed");
  
  // Send the buffer to the screen
  u8g2.sendBuffer();
  
  delay(5000); // Wait 5 seconds before restarting the loop
}


// Function to display the progress bar
void showProgressBar() {
  for(int i = 0; i <= 100; i += random(1, 5)) {
    u8g2.clearBuffer(); // Clear the buffer before each update
    
    // Set the font and draw the title
    u8g2.setFont(u8g2_font_lubB08_tr);
    u8g2.setCursor(0, 10);
    u8g2.print("My Interface");

    // Draw the frame and progress bar
    u8g2.setFont(u8g2_font_ncenB08_tr);
    u8g2.drawFrame(10, 20, 100, 10); // Frame for the graph
    u8g2.drawBox(10, 20, i, 10); // Progress bar

    // Display status information
    u8g2.setCursor(0, 60);
    u8g2.print("Status: Loading...");
    
    // Send the buffer to the screen
    u8g2.sendBuffer();
    
    delay(100); // Wait 100 milliseconds before updating the screen
  }
}
