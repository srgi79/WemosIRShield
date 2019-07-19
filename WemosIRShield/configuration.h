
// WiFi: Config
const char* WIFI_SSID = "Can_Fibra";
const char* WIFI_PASSWORD = "gasalafibra";

// MQTT: Config
const PROGMEM char* MQTT_CLIENT_ID = "SHIELD_IR";
const PROGMEM char* MQTT_SERVER_IP = "35.205.120.181";
const PROGMEM short unsigned int MQTT_SERVER_PORT = 1883;
const PROGMEM char* MQTT_USER = "mqttuser";
const PROGMEM char* MQTT_PASSWORD = "mqttpwd";

// MQTT: Topics
const char* MQTT_OUT_TOPIC = "SHIELD_IR/OUT";
const char* MQTT_IN_TOPIC = "SHIELD_IR/IN";

// PIN: Definitions
const short unsigned int kIrLed = D3;
const short unsigned int ledBuilt = LED_BUILTIN;
