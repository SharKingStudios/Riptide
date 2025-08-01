# Riptide – The Infinitely Expandable Keyboard

### My Massive Glowing Submission to Highway

---

## Renders
*Visuals because everyone loves eye candy.*

![Final CAD Render Top](<./Assets/Riptide Render Front.png>)
![Final CAD Render Top Close](<./Assets/Riptide Render Top Close.png>)
![Final CAD Render Front Low](<./Assets/Riptide Render Front Low.png>)
![Final CAD Render Back](<./Assets/Riptide Render Back.png>)
![Final PCB view back](<./Assets/Screenshots/Screenshot 2025-07-24 110135.png>)
![Final PCB view top](<./Assets/Screenshots/Screenshot 2025-07-30 192022.png>)
![Finished Schematic](<Assets/Screenshots/Screenshot 2025-07-30 225739.png>)


---
## BOM
All the bits and pieces needed can be found **[here](/BOM.csv)**.

| Name                   | Amount     | Price  | Source |
|------------------------|------------|--------|--------|
| PCB                    | 1 (5)      | 33.74  | [JLCPCB](https://jlcpcb.com/) |
| Keycaps                | 1          | 24.99  | [Amazon](https://www.amazon.com/dp/B0DBPKP52D?th=1) |
| Gateron Red Keyswitches| 1          | 34.99  | [Amazon](https://www.amazon.com/gp/product/B07CVQ7ZRL) |
| Diodes                 | 85 (100)   | 6.99   | [Amazon](https://www.amazon.com/dp/B079KJ91JZ) |
| SK6812MINI-E LEDs      | 61 (65)    | 3.84   | [LCSC](https://lcsc.com/product-detail/RGB-LEDs-Built-in-IC_OPSCO-Optoelectronics-SK6812MINI-E_C5149201.html) |
| PCA9555D               | 1          | 1.75   | [LCSC](https://lcsc.com/product-detail/I-O-Expanders_NXP-PCA9555DB-118_C133183.html) |
| X6511FRS-05-C85D30     | 14 (15)    | 2.46   | [LCSC](https://lcsc.com/product-detail/Female-Headers_XKB-Connection-X6511FRS-05-C85D30_C5142238.html) |
| 18ga Steel Plate       | 1          | 0.00   | PRICE Industries |
| Orpheus Pico           | 1          | 0.00   | Me |
| OLED                   | 1          | 0.00   | Old Hackpad Kit |
| EC11 Rotary Encoder    | 1          | 0.00   | Old Hackpad Kit |
| M2.5 10mm Standoffs    | 12         | 0.00   | Me |
| M2.5 3mm Screw         | 12         | 0.00   | Me |
| 4.7K THT Resistor      | 2          | 0.00   | Me |
| Shipping               | N/A        | 11.26  | LCSC |
| **Total**              | —          | **109.00** | — |


---

## What is this?
It's a custom keyboard built for infinite expansion through its module ports! It uses an Orpheus Pico, QMK firmware, and even more LEDs.
The expansion modules could be literally anything! From a screen, a rechargable battery, a buzzer, or even more LEDs! 

### Features:
- **Keycool84 Layout** – Possibly the best?
- **Rotary Encoder** – Twist for volume, scroll, or secret hacker functions.
- **Clickable Encoder Button** – Because sometimes, twisting isn’t enough.
- **61 SK6812 Mini LEDs** – ✨Almost blinding✨
- **Literally Infinite Expandability** – Custom designed module slots that support chaining submodules together!

---

## How It Works:
The infinitely expandable modules were built using an I2C bus! Also since the Orph Pico knows which modules are plugged in, certain modules could unlock further functionality from another! Like a button module being able to activate a haptic feedback (vibration) module. (This isnt built in yet // Software still WIP)

Each module slot has a 5V, EN, GND, SDA, and SCL lines.
After a module is plugged in and ready to work it will pull its EN line high to 3.3V, letting the Pico know there is something there in that expansion slot!

![Final CAD Render Side](<./Assets/Riptide Render Side.png>)

---

## Why?
I built this keyboard for [Highway](https://highway.hackclub.com)—an awesome Hack Club YSWS project mainly run by [Alex Ren](https://github.com/qcoral). (I helped run this event as one of the project reviewers!) I wanted to create something that wasnt just useful, but also super cool! Thats why I went with creating my own expansion support instead of just adding a USB hub and calling it a day.

---

## Contribute  
Want to make it better? Open a PR, suggest a feature, or just yell at me on GitHub.

## Disclaimer  
This project is 100% free, open-source, and powered by **vibes**. If it breaks, explodes, or opens a black hole, **that’s on you.**

![Riptide Banner Bottom](<./Assets/Riptide Banner Bottom.png>)