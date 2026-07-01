// 007 config_override für NOUS A8T (ESP32) - Optimiert für v15.5.0.0
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// --- Logik für dein Watchdog-Script & TLS ---
#ifndef USE_BERRY
#define USE_BERRY        // Berry Scripting (Auf ESP32 standardmäßig aktiv, hier erzwungen)
#endif
#ifndef USE_UFILESYS
#define USE_UFILESYS     // ZWINGEND ERFORDERLICH für Dateizugriff (autoexec.be)
#endif
#ifndef USE_TLS
#define USE_TLS          // TLS-Unterstützung für HTTPS/Telegram aktivieren
#endif
#ifndef USE_WEBSEND_TLS
#define USE_WEBSEND_TLS  // TLS für Berry-webclient (Telegram-API)
#endif
#ifndef USE_WEBCLIENT
#define USE_WEBCLIENT    // Ermöglicht HTTP/HTTPS-Requests im Hintergrund
#endif

// --- Protokolle & Module ---
#ifndef USE_JSON
#define USE_JSON
#endif
#ifndef USE_PING
#define USE_PING         // Ping-Auswertung für Watchdog
#endif
#ifndef USE_RULES
#define USE_RULES        // Button-/Ping-Events
#endif
#ifndef USE_TIMERS
#define USE_TIMERS       // Tasmota-Timer
#endif
#ifndef USE_CRON
#define USE_CRON         // Zeitsteuerung via Cron
#endif

// --- Energie für NOUS A8T ---
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
#define USE_HLW8012      // Wichtig für ältere Nous A8T Versionen
#endif

// --- Taster-Mehrfachklicks aktivieren ---
#ifndef MULTI_PRESS
#define MULTI_PRESS 5    // Ermöglicht Doppelklick/Dreifachklick-Szenarien ohne MQTT
#endif

// --- Webserver & Zeit ---
#ifndef USE_WEBSERVER
#define USE_WEBSERVER
#endif
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

// --- Email / Emailversand ---
#ifndef USE_EMAIL
#define USE_EMAIL
#endif
#ifndef USE_EMAIL_TLS
#define USE_EMAIL_TLS
#endif

#endif // _USER_CONFIG_OVERRIDE_H_
