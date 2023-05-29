// Replace all the placeholders (starting with "<" and ending in ">") with the correct values

// Neopixel
#define PIN            2
#define NUMPIXELS      60

#define MIC_PIN   A0  // Microphone is attached to Trinket GPIO #2/Gemma D2
#define DC_OFFSET  0  // DC offset in mic signal - if unusure, leave 0
#define NOISE     100  // Noise/hum/interference in mic signal
#define SAMPLES   60  // Length of buffer for dynamic level adjustment
#define TOP       (NUMPIXELS +1) // Allow dot to go slightly off scale

// Wifi
char* SSID = "<SSID>";
char* WiFiPassword = "<SSID PASSWORD>";
char* WiFiHostname = "<HOSTNAME>";

// MQTT
const char* mqtt_server = "<MQTT SERVER IP ADDRESS>";
int mqtt_port = 1883;
const char* mqttUser = "<MQTT USER>";
const char* mqttPass = "<MQTT PASSWORD>";

// Device Specific Topics
const char* commandlTopic = "light/led_kitchen";
const char* stateTopic = "light/led_kitchen/state";
const char* rgbCommandTopic = "light/led_kitchen/rgb";
const char* rgbStateTopic = "light/led_kitchen/rgb/state";
const char* availabilityTopic = "light/led_kitchen/availability";
const char* recoveryTopic = "light/led_kitchen/recovery";
