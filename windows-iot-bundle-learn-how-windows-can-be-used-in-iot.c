/*
 * Course: Windows Iot Bundle Learn How Windows Can Be Used In Iot
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Windows Iot Bundle Learn How Windows Can Be Used In Iot
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for Windows IoT-style demo
#include <unistd.h> // Include sleep for timing

// Simulated GPIO relay state
static int relay_on = 0; // Relay state flag

// Entry reading commands simulating Windows IoT message handling
// Main routine: orchestrates the windows iot bundle learn how windows can be used in iot scenario
int main(void) { // Begin main function
  printf("Windows IoT Bundle: Learn how Windows can be used in IoT\n"); // Title
  printf("Type ON/OFF and press Enter (Ctrl+D to end)\n"); // Prompt
  char cmd[8]; // Buffer for command
  while (fgets(cmd, sizeof(cmd), stdin)) { // Read line
    if (cmd[0] == 'O' && cmd[1] == 'N') { // Check ON
      relay_on = 1; // Set relay on
      printf("Relay ON\n"); // Feedback
    } else if (cmd[0] == 'O' && cmd[1] == 'F' && cmd[2] == 'F') { // Check OFF
      relay_on = 0; // Set relay off
      printf("Relay OFF\n"); // Feedback
    } else { // Unknown
      printf("Unknown command\n"); // Error
    } // End condition
    usleep(100000); // Small delay
  } // End input loop
  return 0; // Exit success
} // End main

