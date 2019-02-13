# ESP8266 sdk package home directory
ESP_HOME ?= c:/Espressif

# Default COM port
COM_PORT	 ?= COM10

# base directory of the ESP8266 SDK package, absolute
SDK_BASE	?= $(ESP_HOME)/ESP8266_SDK
SDK_TOOLS	 ?= $(ESP_HOME)/utils/ESP8266

# Other tools mappings
ESPTOOL		 ?= $(SDK_TOOLS)/esptool.exe
KILL_TERM    ?= taskkill.exe -f -im putty.exe || exit 0
GET_FILESIZE ?= stat --printf="%s"
TERMINAL     ?= start "$(SDK_TOOLS)/../putty.exe" -serial $(COM_PORT) -sercfg $(COM_SPEED_SERIAL)
MEMANALYZER  ?= $(SDK_TOOLS)/memanalyzer.exe $(OBJDUMP).exe