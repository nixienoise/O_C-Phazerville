#ifndef OC_STORAGE_H_
#define OC_STORAGE_H_


#define EEPROM_CALIBRATIONDATA_START 0
#define EEPROM_CALIBRATIONDATA_END 64 // calibrate.ino: OCTAVES*uint16_t + ADC_CHANNEL_LAST*unit16_t = 14 * 2 = 28 -> leaves space

#define EEPROM_GLOBALSETTINGS_START EEPROM_CALIBRATIONDATA_END
#define EEPROM_GLOBALSETTINGS_END 512

#define EEPROM_APPDATA_START EEPROM_GLOBALSETTINGS_END
#define EEPROM_APPDATA_END EEPROMStorage::LENGTH

// This is the available space for all apps' settings (\sa OC_apps.ino)
#define EEPROM_APPDATA_BINARY_SIZE 272

#endif // OC_STORAGE_H_
