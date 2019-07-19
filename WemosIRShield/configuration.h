
// WiFi: Config
const char* WIFI_SSID = "XXXX";
const char* WIFI_PASSWORD = "XXXX";

// MQTT: Config
const PROGMEM char* MQTT_CLIENT_ID = "SHIELD_IR";
const PROGMEM char* MQTT_SERVER_IP = "XXXX";
const PROGMEM short unsigned int MQTT_SERVER_PORT = 1883;
const PROGMEM char* MQTT_USER = "XXXX";
const PROGMEM char* MQTT_PASSWORD = "XXXX";

// MQTT: Topics
const char* MQTT_OUT_TOPIC = "SHIELD_IR/OUT";
const char* MQTT_IN_TOPIC = "SHIELD_IR/IN";

// PIN: Definitions
const short unsigned int kIrLed = D3;
const short unsigned int ledBuilt = LED_BUILTIN;
