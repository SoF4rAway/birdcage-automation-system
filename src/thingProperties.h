// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onCleanerRepChange();
void onManCleaningChange();
void onManDisinfectingChange();

float humi;
float temp;
int cleaner_rep;
int food_lv;
int w_lv_value;
bool food_crit;
bool isCleaning;
bool isDisinfecting;
bool man_cleaning;
bool man_disinfecting;
bool wtr_crit;

void initProperties(){

  ArduinoCloud.addProperty(humi, READ, 3 * SECONDS, NULL);
  ArduinoCloud.addProperty(temp, READ, 3 * SECONDS, NULL);
  ArduinoCloud.addProperty(cleaner_rep, READWRITE, ON_CHANGE, onCleanerRepChange);
  ArduinoCloud.addProperty(food_lv, READ, 3 * SECONDS, NULL);
  ArduinoCloud.addProperty(w_lv_value, READ, 3 * SECONDS, NULL);
  ArduinoCloud.addProperty(food_crit, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(isCleaning, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(isDisinfecting, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(man_cleaning, READWRITE, ON_CHANGE, onManCleaningChange);
  ArduinoCloud.addProperty(man_disinfecting, READWRITE, ON_CHANGE, onManDisinfectingChange);
  ArduinoCloud.addProperty(wtr_crit, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
