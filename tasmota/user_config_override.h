// 003 config_override kleiner 1,5MB

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// --- Unnötige, große Module deaktivieren ---
#undef USE_MQTT
#undef USE_BLE
#undef USE_DOMOTICZ
#undef USE_HOME_ASSISTANT
#undef USE_KNX
#undef USE_DISCOVERY
#undef USE_I2C
#undef USE_SPI
#undef USE_DISPLAY
#undef USE_IR_REMOTE
#undef USE_EMULATION
#undef USE_WEBCAM
#undef USE_RC_SWITCH
#undef USE_TUYA_MCU
#undef USE_ZIGBEE
#undef USE_EMAIL
#undef USE_EMAIL_TLS



#define USE_JSON
#define USE_TLS
#define USE_BERRY

// --- Energie für NOUS A8T ---
#define USE_ENERGY_SENSOR
#define USE_ENERGY_MARGIN_DETECTION

// --- Berry + Logik für dein Watchdog-Script ---
#define USE_BERRY        // autoexec.be, webclient(), Treiber-Hooks, Timer
#define USE_PING         // Ping-Auswertung
#define USE_RULES        // Button-/Ping-Events
#define USE_TIMERS       // Tasmota-Timer
#define USE_CRON         // optionale Zeitsteuerung, klein

// --- Telegram via HTTPS (kleines TLS-Modul) ---
#define USE_WEBSEND_TLS  // TLS für Berry-webclient (Telegram-API)
#define USE_WEBCLIENT

// --- Webserver (kompakt, aber vorhanden) ---
#define USE_WEBSERVER

// --- Zeit / Zeitzone ---
#define USE_NTP
#define USE_TIME_ZONE_DATA
#define NTP_SERVER1 "0.de.pool.ntp.org"
#define NTP_SERVER2 "1.de.pool.ntp.org"

#endif
