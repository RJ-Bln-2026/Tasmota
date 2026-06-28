// 005 config_override für 15.5.0.0 gerade so noch 1,5MB

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H|

// --- Unnötige, große Module deaktivieren ---
// HINWEIS: USE_MQTT wurde entfernt, damit Taster-Mehrfachklicks funktionieren!
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

#ifndef USE_JSON
#define USE_JSON
#endif

#ifndef USE_TLS
#define USE_TLS
#endif

// --- Energie für NOUS A8T (Treiber abgesichert) ---
#ifndef USE_ENERGY_SENSOR
#define USE_ENERGY_SENSOR
#endif
#ifndef USE_ENERGY_MARGIN_DETECTION
#define USE_ENERGY_MARGIN_DETECTION
#endif
#ifndef USE_BL0942
#define USE_BL0942       // Wichtig für neuere Nous A8T Versionen
#endif
#ifndef USE_HLW8012
#define USE_HLW8012     // Wichtig für ältere Nous A8T Versionen
#endif

// --- Berry + Logik für dein Watchdog-Script ---
#ifndef USE_BERRY
#define USE_BERRY        // autoexec.be, webclient(), Treiber-Hooks, Timer
#endif
#ifndef USE_UFILESYS
#define USE_UFILESYS     // ZWINGEND ERFORDERLICH, damit Berry Scripte speichern/lesen kann!
#endif
#ifndef USE_PING
#define USE_PING         // Ping-Auswertung
#endif
#ifndef USE_RULES
#define USE_RULES        // Button-/Ping-Events
#endif
#ifndef USE_TIMERS
#define USE_TIMERS       // Tasmota-Timer
#endif
#ifndef USE_CRON
#define USE_CRON         // optionale Zeitsteuerung, klein
#endif

// --- Taster-Mehrfachklicks aktivieren ---
#ifndef MULTI_PRESS
#define MULTI_PRESS 5    // Ermöglicht Doppelklick/Dreifachklick-Szenarien
#endif

// --- Telegram via HTTPS (kleines TLS-Modul) ---
#ifndef USE_WEBSEND_TLS
#define USE_WEBSEND_TLS  // TLS für Berry-webclient (Telegram-API)
#endif
#ifndef USE_WEBCLIENT
#define USE_WEBCLIENT
#endif

// --- Webserver (kompakt, aber vorhanden) ---
#ifndef USE_WEBSERVER
#define USE_WEBSERVER
#endif

// --- Zeit / Zeitzone ---
#ifndef USE_NTP
#define USE_NTP
#endif
#ifndef USE_TIME_ZONE_DATA
#define USE_TIME_ZONE_DATA
#endif
#undef NTP_SERVER1
#define NTP_SERVER1 "0.de.pool.ntp.org"
#undef NTP_SERVER2
#define NTP_SERVER2 "1.de.pool.ntp.org"

// --- Email / Emailversand  ---
#ifndef USE_EMAIL
#define USE_EMAIL
#endif
#ifndef USE_EMAIL_TLS
#define USE_EMAIL_TLS
#endif

#endif // _USER_CONFIG_OVERRIDE_H_

