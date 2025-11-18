/*
 * Course: Windows Iot Bundle Learn How Windows Can Be Used In Iot
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Windows Iot Bundle Learn How Windows Can Be Used In Iot" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/windows-iot-bundle-learn-how-windows-can-be-used-in-iot/
 * Repository: https://github.com/engasm89/windows-iot-bundle-learn-how-windows-can-be-used-in-iot
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

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

// Program entry point reading commands simulating Windows IoT message handling
// Main routine: orchestrates the windows iot bundle learn how windows can be used in iot scenario
int main(void) { // Main function implementation function
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
  return 0; // Exit successfully
} // End of main function

