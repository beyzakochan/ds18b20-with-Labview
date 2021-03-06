# DS18B20 with LabView

In this project, the temperature adjustable food pot for babies will be made using Labview with DS18B20.

## Why do we need a temperature regulated food pot?
Temperature setting is an important factor in preserving food. The temperature of the food, which is equally important for babies, is actually not provided very healthy compared to most old methods. Most food cookers are actually impractical to use and clean. Having an extra socket, along with a lot of plug-in parts, makes it difficult to clean and creates bacteria.

![testing-baby-milk-temperature-wrist-testing-baby-milk-temperature-wrist-food-newborn-baby-bottle-154498278](https://user-images.githubusercontent.com/79100777/172056586-54919c25-5f1d-4877-9f76-9b940769b27e.jpg)



## Benefits of the project

In this project, I designed a simple and effective pot. Having only one pot will allow the food to be adjusted to the ideal temperature on the stove without the need for extra electricity. At the same time, regardless of its temperature, it will show you the first temperature of the product stored in the refrigerator with the help of a sensitive sensor and you will be able to control the temperature of the food. Notifying you when it reaches the ideal temperature, it will not allow the pan to rise above the ideal maximum temperature so that the food does not burn, but it can be raised to high temperatures when desired. High temperature will be needed more for removing bacteria from the pot and cleaning it.

## Used Materials and Tools:

- DS18B20 Temperature Sensor (Waterproof)
- Arduino Mega 2560
- Breadboard
- 4.7k ohm resistor
- Jumper cables
- Connector
- LabView

## Why did I choose the DS18B20 temperature sensor?

This sensor was chosen because the sensor's accuracy and operating temperature range is sufficient for a baby food.


## Arduino Connection

![WhatsApp Image 2022-06-05 at 16 06 42](https://user-images.githubusercontent.com/79100777/172051889-5243db91-e275-4a67-8cbc-2fb07a623303.jpeg)

![Image datasheet](https://fluxworkshop.info/images/blog/lets_workshop_BIAA100074_DS18b20%20Temperature%20Probe_UNO%20Wiring%20Example_Fritzing%20Project_bb.png)

```sh
#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(2);

DallasTemperature sensors(&oneWire);

void setup() {
  delay(500);
  Serial.begin(115200);
  sensors.begin();
  
}

void loop() {
  sensors.requestTemperatures();
  float temp = sensors.getTempCByIndex(0);
  Serial.println(temp);
  
}
```
## Block Diagram Design By LABVIEW

![2022-06-05 (3)](https://user-images.githubusercontent.com/79100777/172061309-ff0c432a-48dc-42bc-9dad-f0db7d28a0f1.png)


## Front Panel Design By LABVIEW


![2022-06-05 (6)](https://user-images.githubusercontent.com/79100777/172061415-a824270f-181b-4f26-9f79-7a5818702e4f.png)


