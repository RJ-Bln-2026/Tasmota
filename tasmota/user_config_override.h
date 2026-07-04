// 008b config_override für NOUS A8T (ESP32 Dual-Core) - Optimiert für EN-Original v15.5.0.1 mit RTC

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// --- Logik für dein Watchdog-Script & TLS ---
#ifndef USE_BERRY
#define USE_BERRY              // Berry Scripting aktivieren
#endif
#ifndef USE_UFILESYS
#define USE_UFILESYS           // ZWINGEND ERFORDERLICH für Dateizugriff (autoexec.be)
#endif
#ifndef USE_TLS
#define USE_TLS                // TLS-Unterstützung für HTTPS/Telegram aktivieren
#endif

// --- NATIVE BERRY WEBCLIENT EXTENSIONS (KORREKTUR FÜR v15+) ---
#ifndef USE_BERRY_WEBCLIENT
#define USE_BERRY_WEBCLIENT    // Bindet die HTTP-Klasse exakt als 'webclient' in Berry ein
#endif
#ifndef USE_BERRY_HTTP_TLS
#define USE_BERRY_HTTP_TLS     // Schaltet HTTPS/TLS-Verschlüsselung für das Berry-Modul frei
#endif

// --- RTC-RAM / Berry-RTC (Optimiert für Tasmota32 Core Variables) ---
#ifndef USE_RTC
#define USE_RTC                // Grundlegende RTC-Unterstützung
#endif
#ifndef USE_RTC_MEM
#define USE_RTC_MEM            // RTC-Speicherbereich aktivieren
#endif
#ifndef USE_RTC_FAST_MEM
#define USE_RTC_FAST_MEM       // Fast-RAM für Berry
#endif
#ifndef USE_RTC_VARIABLES
#define USE_RTC_VARIABLES      // tasmota.rtc_get / rtc_set aktivieren
#endif
#ifndef USE_BERRY_RTC
#define USE_BERRY_RTC          // Berry-Bindings für RTC aktivieren
#endif

// --- Protokolle & Module ---
#ifndef USE_JSON
#define USE_JSON
#endif
#ifndef USE_PING
#define USE_PING               // Ping-Auswertung für Watchdog
#endif
#ifndef USE_RULES
#define USE_RULES              // Button-/Ping-Events
#endif
#ifndef USE_TIMERS
#define USE_TIMERS             // Tasmota-Timer
#endif
#ifndef USE_CRON
#define USE_CRON               // Zeitsteuerung via Cron
#endif

// --- Energie für NOUS A8T ---
#ifndef USE_ENERGY_SENSOR
#define USE_ENERGY_SENSOR
#endif
#ifndef USE_ENERGY_MARGIN_DETECTION
#define USE_ENERGY_MARGIN_DETECTION
#endif
#ifndef USE_BL0942
#define USE_BL0942             // Wichtig für neuere Nous A8T Versionen
#endif
#ifndef USE_HLW8012
#define USE_HLW8012            // Wichtig für ältere Nous A8T Versionen
#endif

// --- Taster-Mehrfachklicks aktivieren ---
#ifndef MULTI_PRESS
#define MULTI_PRESS 5          // Ermöglicht Doppelklick/Dreifachklick-Szenarien ohne MQTT
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
