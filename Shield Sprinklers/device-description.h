/*
 * Afero Device Profile header file
 * Device Description:		86ef7b3d-6dca-4a8b-b7ad-9207719c26c7
 * Schema Version:	2
 */


#define ATTRIBUTE_TYPE_SINT8                                    2
#define ATTRIBUTE_TYPE_SINT16                                   3
#define ATTRIBUTE_TYPE_SINT32                                   4
#define ATTRIBUTE_TYPE_SINT64                                   5
#define ATTRIBUTE_TYPE_BOOLEAN                                  1
#define ATTRIBUTE_TYPE_UTF8S                                   20
#define ATTRIBUTE_TYPE_BYTES                                   21
#define ATTRIBUTE_TYPE_FLOAT32                                 10

//region Service ID 1
// Attribute Relay 1
#define AF_RELAY_1                                           1024
#define AF_RELAY_1_SZ                                           2
#define AF_RELAY_1_TYPE                     ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 0 Configuration
#define AF_GPIO_0_CONFIGURATION                              1025
#define AF_GPIO_0_CONFIGURATION_SZ                              8
#define AF_GPIO_0_CONFIGURATION_TYPE        ATTRIBUTE_TYPE_SINT64

// Attribute Relay 2
#define AF_RELAY_2                                           1026
#define AF_RELAY_2_SZ                                           2
#define AF_RELAY_2_TYPE                     ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 1 Configuration
#define AF_GPIO_1_CONFIGURATION                              1027
#define AF_GPIO_1_CONFIGURATION_SZ                              8
#define AF_GPIO_1_CONFIGURATION_TYPE        ATTRIBUTE_TYPE_SINT64

// Attribute Relay 3
#define AF_RELAY_3                                           1028
#define AF_RELAY_3_SZ                                           2
#define AF_RELAY_3_TYPE                     ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 2 Configuration
#define AF_GPIO_2_CONFIGURATION                              1029
#define AF_GPIO_2_CONFIGURATION_SZ                              8
#define AF_GPIO_2_CONFIGURATION_TYPE        ATTRIBUTE_TYPE_SINT64

// Attribute Relay 4
#define AF_RELAY_4                                           1030
#define AF_RELAY_4_SZ                                           2
#define AF_RELAY_4_TYPE                     ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 3 Configuration
#define AF_GPIO_3_CONFIGURATION                              1031
#define AF_GPIO_3_CONFIGURATION_SZ                              8
#define AF_GPIO_3_CONFIGURATION_TYPE        ATTRIBUTE_TYPE_SINT64

// Attribute Bootloader Version
#define AF_BOOTLOADER_VERSION                                2001
#define AF_BOOTLOADER_VERSION_SZ                                8
#define AF_BOOTLOADER_VERSION_TYPE          ATTRIBUTE_TYPE_SINT64

// Attribute Softdevice Version
#define AF_SOFTDEVICE_VERSION                                2002
#define AF_SOFTDEVICE_VERSION_SZ                                8
#define AF_SOFTDEVICE_VERSION_TYPE          ATTRIBUTE_TYPE_SINT64

// Attribute Application Version
#define AF_APPLICATION_VERSION                               2003
#define AF_APPLICATION_VERSION_SZ                               8
#define AF_APPLICATION_VERSION_TYPE         ATTRIBUTE_TYPE_SINT64

// Attribute Profile Version
#define AF_PROFILE_VERSION                                   2004
#define AF_PROFILE_VERSION_SZ                                   8
#define AF_PROFILE_VERSION_TYPE             ATTRIBUTE_TYPE_SINT64

// Attribute Security Enabled
#define AF_SECURITY_ENABLED                                 60000
#define AF_SECURITY_ENABLED_SZ                                  1
#define AF_SECURITY_ENABLED_TYPE           ATTRIBUTE_TYPE_BOOLEAN

// Attribute Attribute ACK
#define AF_ATTRIBUTE_ACK                                    65018
#define AF_ATTRIBUTE_ACK_SZ                                     2
#define AF_ATTRIBUTE_ACK_TYPE               ATTRIBUTE_TYPE_SINT16

// Attribute Reboot Reason
#define AF_REBOOT_REASON                                    65019
#define AF_REBOOT_REASON_SZ                                    64
#define AF_REBOOT_REASON_TYPE                ATTRIBUTE_TYPE_UTF8S

// Attribute BLE Comms
#define AF_BLE_COMMS                                        65020
#define AF_BLE_COMMS_SZ                                        12
#define AF_BLE_COMMS_TYPE                    ATTRIBUTE_TYPE_BYTES

// Attribute SPI Enabled
#define AF_SPI_ENABLED                                      65021
#define AF_SPI_ENABLED_SZ                                       1
#define AF_SPI_ENABLED_TYPE                ATTRIBUTE_TYPE_BOOLEAN
//endregion
