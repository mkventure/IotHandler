#include "secrets.h"

#define WIFI_PIN 2
#define LED_PIN LED_BUILTIN

// Wifi Parameters
#define WIFI_SSID SECRET_WIFI_SSID
#define WIFI_PASSWORD SECRET_WIFI_PASSWORD

// MQTT Parameters
#define MQTT_BROKER SECRET_MQTT_BROKER
#define MQTT_PORT 1883
#define MQTT_USERNAME SECRET_MQTT_USERNAME
#define MQTT_PASSWORD SECRET_MQTT_PASSWORD
#define MQTT_NODE_ID "LR_FAN"
#define MQTT_DISCOVERY_PREFIX "homeassistant"

// Module Config
#define FAN_OFF_PIN 5
#define FAN_LOW_PIN 14
#define FAN_MED_PIN 12
#define FAN_HIGH_PIN 16
#define LIGHT_PIN 13

#define PIR_PIN 4