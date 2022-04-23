Water Level Indicator

The Water Level Indicator employs a simple mechanism to detect and indicate the water level in an overhead tank or any other water container.

The sensing is done by using a set of nine probes which are placed at nine different levels on the tank walls (with probe 9 to probe 1 placed in increasing order of height, common probe (i.e. a supply carrying probe) is placed at the base of the tank). The level 8 represents the “tank full” condition while level 0 represents the “tank empty” condition.

*Recommend Reading: How Water Level Controller Circuit Works using 8051 Microcontroller

When the water-level is below the minimum detectable level (MDL), the seven segment display is arranged to show the digit 0, indicating that the tank is empty, when the water reaches level1 (but is below level2) the connection between the probes gets completed (through the conducting medium – water) and the base voltage of transistor increases.

This causes the base-emitter junction of transistor to get forward biased, this switches transistor from cut-off to conduction mode thus PIN (B7) of microcontroller is pulled to ground hence, the corresponding digit displayed by the seven segment display is 1.

The similar mechanism applies to the detection of all the other levels. When the tank is full, all input pins of microcontroller become low. This causes the display to show 8 and also in this case a buzzer sound is given, thereby indicating a “tank full” condition.

Most water level indicators are equipped to indicate and detect only a single level. The Water Level Indicator implemented here can indicate up to nine such levels and the microcontroller displays the level number on a seven segment display.

So, the circuit not only capable of cautioning a person that the water tank has been filled up to certain level, but also indicates that the water level has fallen below the minimum detectable level. This circuit is important in appliances such as the water cooler where there is a danger of motor-burnout when there is no water in the radiator used up also it can be used in fuel level indication.

 *Recommened Reading: Water Level Alarm Using 555 Timer
In this project we show the water level indicator using eight transistors which conducts as level rises, a buzzer is also added which will automatically start as the water level becomes full, auto buzzer start with the help of microcontroller. With the help of this project we not only show the level of water on seven segment display but also indicate the water full condition using a buzzer.
