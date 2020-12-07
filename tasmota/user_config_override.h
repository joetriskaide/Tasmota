#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#warning **** user_config_override.h: Using Settings from this File ****

#ifdef STA_SSID1
  #undef STA_SSID1
#endif
#define STA_SSID1	""

#ifdef STA_PASS1
  #undef STA_PASS1
#endif
#define STA_PASS1	""

#ifdef WIFI_IP_ADDRESS
  #undef WIFI_IP_ADDRESS
#endif
#define WIFI_IP_ADDRESS	""

#ifdef WIFI_SUBNETMASK
  #undef WIFI_SUBNETMASK
#endif
#define WIFI_SUBNETMASK	""

#ifdef WIFI_GATEWAY
  #undef WIFI_GATEWAY
#endif
#define WIFI_GATEWAY	""

#ifdef WIFI_DNS
  #undef WIFI_DNS
#endif
#define WIFI_DNS	""

#ifdef USE_MHZ19
  #undef USE_MHZ19
#endif

#ifdef USE_SENSEAIR
  #undef USE_SENSEAIR
#endif

#ifdef USE_PMS5003
  #undef USE_PMS5003
#endif

#ifdef USE_NOVA_SDS
  #undef USE_NOVA_SDS
#endif

#ifdef USE_HPMA
  #undef USE_HPMA
#endif

#ifdef USE_EMULATION
  #undef USE_EMULATION
#endif

#ifdef USE_EMULATION_HUE
  #undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
  #undef USE_EMULATION_WEMO
#endif

#ifdef USE_TASMOTA_SLAVE
  #undef USE_TASMOTA_SLAVE
#endif

#ifdef USE_ADC_VCC
  #undef USE_ADC_VCC
#endif
#define USE_ADC_VCC

#ifdef USE_DISPLAY
  #undef USE_DISPLAY
#endif

#ifdef USE_DISPLAY_MODES1TO5
  #undef USE_DISPLAY_MODES1TO5
#endif

#ifdef USE_DISPLAY_LCD
  #undef USE_DISPLAY_LCD
#endif

#ifdef USE_DISPLAY_SSD1306
  #undef USE_DISPLAY_SSD1306
#endif

#ifdef USE_DISPLAY_MATRIX
  #undef USE_DISPLAY_MATRIX
#endif

#ifdef USE_DISPLAY_SH1106
  #undef USE_DISPLAY_SH1106
#endif

#ifdef USE_DISPLAY_ILI9341
  #undef USE_DISPLAY_ILI9341
#endif

#ifdef USE_DISPLAY_EPAPER_29
  #undef USE_DISPLAY_EPAPER_29
#endif

#ifdef USE_DISPLAY_EPAPER_42
  #undef USE_DISPLAY_EPAPER_42
#endif

#ifdef USE_DISPLAY_ILI9488
  #undef USE_DISPLAY_ILI9488
#endif

#ifdef USE_DISPLAY_SSD1351
  #undef USE_DISPLAY_SSD1351
#endif

#ifdef USE_DISPLAY_RA8876
  #undef USE_DISPLAY_RA8876
#endif

#ifdef USE_DOMOTICZ
  #undef USE_DOMOTICZ
#endif

#ifdef USE_ENERGY_SENSOR
  #undef USE_ENERGY_SENSOR
#endif

#ifdef USE_PZEM004T
  #undef USE_PZEM004T
#endif

#ifdef USE_PZEM_AC
  #undef USE_PZEM_AC
#endif

#ifdef USE_PZEM_DC
  #undef USE_PZEM_DC
#endif

#ifdef USE_MCP39F501
  #undef USE_MCP39F501
#endif

#ifdef USE_SDM120
  #undef USE_SDM120
#endif

#ifdef USE_SDM630
  #undef USE_SDM630
#endif

#ifdef USE_DDS2382
  #undef USE_DDS2382
#endif

#ifdef USE_DDSU666
  #undef USE_DDSU666
#endif

#ifdef USE_SOLAX_X1
  #undef USE_SOLAX_X1
#endif

#ifdef USE_LE01MR
  #undef USE_LE01MR
#endif

#ifdef USE_HOME_ASSISTANT
  #undef USE_HOME_ASSISTANT
#endif

#ifdef USE_I2C
  #undef USE_I2C
#endif

#ifdef USE_MCP230xx
  #undef USE_MCP230xx
#endif

#ifdef USE_MCP230xx_OUTPUT
  #undef USE_MCP230xx_OUTPUT
#endif

#ifdef USE_MCP230xx_DISPLAYOUTPUT
  #undef USE_MCP230xx_DISPLAYOUTPUT
#endif

#ifdef USE_IR_REMOTE
  #undef USE_IR_REMOTE
#endif
#define USE_IR_REMOTE

#ifdef USE_IR_REMOTE_FULL
  #undef USE_IR_REMOTE_FULL
#endif

#ifdef USE_KNX
  #undef USE_KNX
#endif

#ifdef USE_DISCOVERY
  #undef USE_DISCOVERY
#endif
#define USE_DISCOVERY

#ifdef USE_MQTT_TLS
  #undef USE_MQTT_TLS
#endif
#define USE_MQTT_TLS

#ifdef USE_RC_SWITCH
  #undef USE_RC_SWITCH
#endif
#define USE_RC_SWITCH

#ifdef USE_RULES
  #undef USE_RULES
#endif

#ifdef USE_EXPRESSION
  #undef USE_EXPRESSION
#endif

#ifdef SUPPORT_IF_STATEMENT
  #undef SUPPORT_IF_STATEMENT
#endif

#ifdef USE_SCRIPT
  #undef USE_SCRIPT
#endif

#ifdef USE_SPI
  #undef USE_SPI
#endif

#ifdef USE_TIMERS
  #undef USE_TIMERS
#endif
#define USE_TIMERS

#ifdef USE_TUYA_MCU
  #undef USE_TUYA_MCU
#endif

#ifdef USE_SR04
  #undef USE_SR04
#endif

#ifdef USE_WEBSERVER
  #undef USE_WEBSERVER
#endif
#define USE_WEBSERVER

#ifdef USE_WS2812
  #undef USE_WS2812
#endif

#ifdef USE_ZIGBEE
  #undef USE_ZIGBEE
#endif

#ifdef MY_LANGUAGE
  #undef MY_LANGUAGE
#endif
#define MY_LANGUAGE	de_DE

#endif