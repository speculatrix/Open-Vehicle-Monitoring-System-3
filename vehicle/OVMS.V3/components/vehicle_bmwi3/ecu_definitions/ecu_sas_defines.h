
//
// Warning: don't edit - generated by generate_ecu_code.pl processing ../dev/sas_i1.json: SAS 22: Optional equipment system
// This generated code  makes it easier to process CANBUS messages from the SAS ecu in a BMW i3
//

#define I3_ECU_SAS_TX                                                0x06F122
#define I3_ECU_SAS_RX                                                0x0622F1

// Skipping SWC_VERSIONEN_LESEN_INDEX_DATENSATZ on 0xA200 which takes arguments

// Skipping SWC_VERSIONEN_LESEN_KMAIN_KSUB on 0xA201 which takes arguments

// Skipping VDC0_FESTSTROM on 0xABC7 which takes arguments

// Skipping VDC0_FESTSTROM on 0xABC7 which takes arguments

// Skipping VDC0_MODUS on 0xABC8 which takes arguments

#define I3_PID_SAS_LERNDATEN_RUECKSETZEN                             0xABC9
        // Learning data (of the learning infrastructure) are reset to default values. / Lerndaten (der Infrastruktur
        // Lernen) werden auf Standardwerte zurückgesetzt.

#define I3_PID_SAS_VDC0_LESEN                                        0xD817
        // Reading out the current status of each VDC0 valve (status, actual current, target current) and environmental
        // data (terminal, wheel speeds, ¿). / Auslesen des aktuellen Status jedes VDC0-Ventils (Status, Ist-Strom,
        // Soll-Strom) und Umgebungsdaten (Klemme, Radgeschwindigkeiten,¿).

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VL_WERT                    (RXBUF_UINT(0))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VL_WERT_UNIT               'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VL_WERT_TYPE               unsigned short
        // Target current of the VDC channel in the front left / Sollstrom des VDC Kanals vorne links

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VR_WERT                    (RXBUF_UINT(2))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VR_WERT_UNIT               'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VR_WERT_TYPE               unsigned short
        // Target current of the VDC channel in the front right / Sollstrom des VDC Kanals vorne rechts

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HL_WERT                    (RXBUF_UINT(4))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HL_WERT_UNIT               'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HL_WERT_TYPE               unsigned short
        // Target current of the VDC channel at the rear left / Sollstrom des VDC Kanals hinten links

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HR_WERT                    (RXBUF_UINT(6))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HR_WERT_UNIT               'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HR_WERT_TYPE               unsigned short
        // Set current of the VDC channel at the rear right / Sollstrom des VDC Kanals hinten rechts

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VL_WERT                     (RXBUF_UINT(8))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VL_WERT_UNIT                'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VL_WERT_TYPE                unsigned short
        // Actual current of the VDC channel front left / Iststrom des VDC Kanals vorne links

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VR_WERT                     (RXBUF_UINT(10))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VR_WERT_UNIT                'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VR_WERT_TYPE                unsigned short
        // Actual current of the VDC channel in the front right / Iststrom des VDC Kanals vorne rechts

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HL_WERT                     (RXBUF_UINT(12))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HL_WERT_UNIT                'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HL_WERT_TYPE                unsigned short
        // Actual current of the VDC channel at the rear left / Iststrom des VDC Kanals hinten links

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HR_WERT                     (RXBUF_UINT(14))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HR_WERT_UNIT                'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HR_WERT_TYPE                unsigned short
        // Actual current of the VDC channel at the rear right / Iststrom des VDC Kanals hinten rechts

    #define I3_RES_SAS_STAT_VDC_STATUS_VL                            (RXBUF_UCHAR(16))
    #define I3_RES_SAS_STAT_VDC_STATUS_VL_UNIT                       '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_VL_TYPE                       unsigned char
        // Status of the front left VDC channel / Status des VDC Kanals vorne links

    #define I3_RES_SAS_STAT_VDC_STATUS_VR                            (RXBUF_UCHAR(17))
    #define I3_RES_SAS_STAT_VDC_STATUS_VR_UNIT                       '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_VR_TYPE                       unsigned char
        // Status of the VDC channel in the front right / Status des VDC Kanals vorne rechts

    #define I3_RES_SAS_STAT_VDC_STATUS_HL                            (RXBUF_UCHAR(18))
    #define I3_RES_SAS_STAT_VDC_STATUS_HL_UNIT                       '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_HL_TYPE                       unsigned char
        // Status of the VDC channel in the back left / Status des VDC Kanals hinten links

    #define I3_RES_SAS_STAT_VDC_STATUS_HR                            (RXBUF_UCHAR(19))
    #define I3_RES_SAS_STAT_VDC_STATUS_HR_UNIT                       '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_HR_TYPE                       unsigned char
        // Status of the VDC channel in the back right / Status des VDC Kanals hinten rechts

    #define I3_RES_SAS_STAT_KLEMMEN                                  (RXBUF_UCHAR(20))
    #define I3_RES_SAS_STAT_KLEMMEN_UNIT                             '0-n'
    #define I3_RES_SAS_STAT_KLEMMEN_TYPE                             unsigned char
        // Internal status of terminal KL15 0 = KL15 OFF 1 = KL15 ON / Interner Status der Klemme KL15 0 = KL15 AUS 1 =
        // KL15 AN

    #define I3_RES_SAS_STAT_WHL_SPD_VL_WERT                          (RXBUF_UINT(21)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_VL_WERT_UNIT                     'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_VL_WERT_TYPE                     float
        // Front left wheel speed (from FlexRay) / Radgeschwindigkeit vorne links (von FlexRay)

    #define I3_RES_SAS_STAT_WHL_SPD_VR_WERT                          (RXBUF_UINT(23)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_VR_WERT_UNIT                     'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_VR_WERT_TYPE                     float
        // Wheel speed front right (from FlexRay) / Radgeschwindigkeit vorne rechts (von FlexRay)

    #define I3_RES_SAS_STAT_WHL_SPD_HL_WERT                          (RXBUF_UINT(25)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_HL_WERT_UNIT                     'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_HL_WERT_TYPE                     float
        // Rear left wheel speed (from FlexRay) / Radgeschwindigkeit hinten links (von FlexRay)

    #define I3_RES_SAS_STAT_WHL_SPD_HR_WERT                          (RXBUF_UINT(27)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_HR_WERT_UNIT                     'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_HR_WERT_TYPE                     float
        // Wheel speed rear right (from FlexRay) / Radgeschwindigkeit hinten rechts (von FlexRay)

#define I3_PID_SAS_VDC0_LESEN_0XD817                                 0xD817
        // Reading out the current status of each VDC0 valve (status, actual current, target current) and environmental
        // data (terminal, wheel speeds, ¿). / Auslesen des aktuellen Status jedes VDC0-Ventils (Status, Ist-Strom,
        // Soll-Strom) und Umgebungsdaten (Klemme, Radgeschwindigkeiten,¿).

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VL_WERT_0XD817             (RXBUF_UINT(0))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VL_WERT_0XD817_UNIT        'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VL_WERT_0XD817_TYPE        unsigned short
        // Target current of the VDC channel in the front left / Sollstrom des VDC Kanals vorne links

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VR_WERT_0XD817             (RXBUF_UINT(2))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VR_WERT_0XD817_UNIT        'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_VR_WERT_0XD817_TYPE        unsigned short
        // Target current of the VDC channel in the front right / Sollstrom des VDC Kanals vorne rechts

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HL_WERT_0XD817             (RXBUF_UINT(4))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HL_WERT_0XD817_UNIT        'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HL_WERT_0XD817_TYPE        unsigned short
        // Target current of the VDC channel at the rear left / Sollstrom des VDC Kanals hinten links

    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HR_WERT_0XD817             (RXBUF_UINT(6))
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HR_WERT_0XD817_UNIT        'mA'
    #define I3_RES_SAS_STAT_VDC_SOLLSTROM_HR_WERT_0XD817_TYPE        unsigned short
        // Set current of the VDC channel at the rear right / Sollstrom des VDC Kanals hinten rechts

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VL_WERT_0XD817              (RXBUF_UINT(8))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VL_WERT_0XD817_UNIT         'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VL_WERT_0XD817_TYPE         unsigned short
        // Actual current of the VDC channel front left / Iststrom des VDC Kanals vorne links

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VR_WERT_0XD817              (RXBUF_UINT(10))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VR_WERT_0XD817_UNIT         'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_VR_WERT_0XD817_TYPE         unsigned short
        // Actual current of the VDC channel in the front right / Iststrom des VDC Kanals vorne rechts

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HL_WERT_0XD817              (RXBUF_UINT(12))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HL_WERT_0XD817_UNIT         'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HL_WERT_0XD817_TYPE         unsigned short
        // Actual current of the VDC channel at the rear left / Iststrom des VDC Kanals hinten links

    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HR_WERT_0XD817              (RXBUF_UINT(14))
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HR_WERT_0XD817_UNIT         'mA'
    #define I3_RES_SAS_STAT_VDC_ISTSTROM_HR_WERT_0XD817_TYPE         unsigned short
        // Actual current of the VDC channel at the rear right / Iststrom des VDC Kanals hinten rechts

    #define I3_RES_SAS_STAT_VDC_STATUS_VL_0XD817                     (RXBUF_UCHAR(16))
    #define I3_RES_SAS_STAT_VDC_STATUS_VL_0XD817_UNIT                '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_VL_0XD817_TYPE                unsigned char
        // Status of the front left VDC channel / Status des VDC Kanals vorne links

    #define I3_RES_SAS_STAT_VDC_STATUS_VR_0XD817                     (RXBUF_UCHAR(17))
    #define I3_RES_SAS_STAT_VDC_STATUS_VR_0XD817_UNIT                '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_VR_0XD817_TYPE                unsigned char
        // Status of the VDC channel in the front right / Status des VDC Kanals vorne rechts

    #define I3_RES_SAS_STAT_VDC_STATUS_HL_0XD817                     (RXBUF_UCHAR(18))
    #define I3_RES_SAS_STAT_VDC_STATUS_HL_0XD817_UNIT                '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_HL_0XD817_TYPE                unsigned char
        // Status of the VDC channel in the back left / Status des VDC Kanals hinten links

    #define I3_RES_SAS_STAT_VDC_STATUS_HR_0XD817                     (RXBUF_UCHAR(19))
    #define I3_RES_SAS_STAT_VDC_STATUS_HR_0XD817_UNIT                '0-n'
    #define I3_RES_SAS_STAT_VDC_STATUS_HR_0XD817_TYPE                unsigned char
        // Status of the VDC channel in the back right / Status des VDC Kanals hinten rechts

    #define I3_RES_SAS_STAT_KLEMMEN_0XD817                           (RXBUF_UCHAR(20))
    #define I3_RES_SAS_STAT_KLEMMEN_0XD817_UNIT                      '0-n'
    #define I3_RES_SAS_STAT_KLEMMEN_0XD817_TYPE                      unsigned char
        // Internal status of terminal KL15 0 = KL15 OFF 1 = KL15 ON / Interner Status der Klemme KL15 0 = KL15 AUS 1 =
        // KL15 AN

    #define I3_RES_SAS_STAT_WHL_SPD_VL_WERT_0XD817                   (RXBUF_UINT(21)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_VL_WERT_0XD817_UNIT              'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_VL_WERT_0XD817_TYPE              float
        // Front left wheel speed (from FlexRay) / Radgeschwindigkeit vorne links (von FlexRay)

    #define I3_RES_SAS_STAT_WHL_SPD_VR_WERT_0XD817                   (RXBUF_UINT(23)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_VR_WERT_0XD817_UNIT              'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_VR_WERT_0XD817_TYPE              float
        // Wheel speed front right (from FlexRay) / Radgeschwindigkeit vorne rechts (von FlexRay)

    #define I3_RES_SAS_STAT_WHL_SPD_HL_WERT_0XD817                   (RXBUF_UINT(25)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_HL_WERT_0XD817_UNIT              'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_HL_WERT_0XD817_TYPE              float
        // Rear left wheel speed (from FlexRay) / Radgeschwindigkeit hinten links (von FlexRay)

    #define I3_RES_SAS_STAT_WHL_SPD_HR_WERT_0XD817                   (RXBUF_UINT(27)*0.0156f-511.984)
    #define I3_RES_SAS_STAT_WHL_SPD_HR_WERT_0XD817_UNIT              'rad/s'
    #define I3_RES_SAS_STAT_WHL_SPD_HR_WERT_0XD817_TYPE              float
        // Wheel speed rear right (from FlexRay) / Radgeschwindigkeit hinten rechts (von FlexRay)

#define I3_PID_SAS_STATUS_SWC_VERSIONEN_LESEN_ANZAHL_DATENSAETZE     0xDD33
        // - / -

    #define I3_RES_SAS_STAT_INDEX_DATENSATZ_WERT                     (RXBUF_UINT(0))
    #define I3_RES_SAS_STAT_INDEX_DATENSATZ_WERT_TYPE                unsigned short
        // - / -

#define I3_PID_SAS_READ_EXCEPTION_DATA                               0x4001
        // Developer data for analyzing exceptions / Entwicklerdaten zur Analyse von Exceptions

    // Can't yet generate code for STAT_EXCEPTION_DATA of type data[50] at offset 0. But we account for the 50 bytes
        // Developer data for analyzing exceptions / Entwicklerdaten zur Analyse von Exceptions

#define I3_PID_SAS_CLEAR_EXCEPTION_DATA                              0xF000
        // Deletion of the additional data to support the debugging of occurring exceptions / Löschen der zusätzlichen
        // Daten zur Unterstützung des Debuggens auftretender Exceptions
