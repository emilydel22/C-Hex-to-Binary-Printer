# C-Hex-to-Binary-Printer

![Language](https://img.shields.io/badge/Language-C-blue)
![Course](https://img.shields.io/badge/Course-EEL%202880-orange)
![Concept](https://img.shields.io/badge/Concept-Bitwise%20Operations-purple)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen)

## Overview
This project demonstrates how a hexadecimal integer can be represented and printed in binary using **bitwise operations in C**. The program applies a bit mask to evaluate each bit of a 16-bit hexadecimal value and outputs its binary equivalent in grouped 4-bit segments for readability.

The program also prints the system date and time at runtime to satisfy course requirements for timestamped output.

## Key Concepts Demonstrated
- Bitwise AND (`&`)
- Bit masking
- Bit shifting (`>>`)
- Hexadecimal to binary conversion
- Formatted output in C
- Use of `<time.h>` for date/time printing

## How It Works
- A hexadecimal value (`0x1B53`) is stored in an integer.
- A mask starting at `0x8000` checks the most significant bit first.
- The mask shifts right one bit per iteration to inspect all 16 bits.
- Each bit is printed as `1` or `0`, with spacing every four bits.

## Files
- `main 3.c` — C source code for hex-to-binary conversion
- `Code+Output` — Screenshot showing program output
- `README.md` — Project documentation
