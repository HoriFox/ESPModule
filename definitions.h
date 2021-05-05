// Main configuration
#define SERIAL_BAUD 115200
#define WIFI_SSID   "WIFI_SSID"
#define WIFI_PASS   "WIFI_PASS"
#define CONTROL_PIN 0
// Comment BUTTON_PIN to disable button logic
#define BUTTON_PIN  2

// Over-the-air programming
#define ENABLE_OTA
#define DEVICE_NAME "OTA_DEVICE_NAME"
#define DEVICE_PASS "OTA_DEVICE_PASS"

// Static IP configuration
//#define ENABLE_STATIC_IP
// Be careful, commas are required!
#define WIFI_STATIC_IP   192,168,1,250
#define WIFI_STATIC_GW   192,168,1,1
#define WIFI_STATIC_MASK 255,255,255,0
