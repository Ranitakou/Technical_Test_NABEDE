#include <esp_sleep.h>
#include <driver/adc.h>

void setup() {
  //Configure ADC pin
  adc1_config_width(ADC_WIDTH_BIT_12);
  adc1_config_channel_atten(ADC1_CHANNEL_0, ADC_ATTEN_DB_0);
}

void loop() {
  //Read analog value from ADC pin
  int analog_value = adc1_get_raw(ADC1_CHANNEL_0);
  
  //Print the analog value to the serial monitor
  Serial.print("Analog Value: ");
  Serial.println(analog_value);
  
  //Set ESP32 to deep sleep mode for 10 minutes
  esp_sleep_enable_timer_wakeup(10 * 60 * 1000000); //10 minutes in microseconds
  esp_deep_sleep_start();
}
