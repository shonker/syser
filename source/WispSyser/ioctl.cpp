
#include "othercmd.hpp"

IOCTL_ENTRY stIoctlList[] =
        {
      {"IOCTL_BEEP_SET", 0x00010000 },
      {"IOCTL_CDROM_DISK_TYPE", 0x00020040 },
      {"IOCTL_CDROM_READ_TOC", 0x00024000 },
      {"IOCTL_CDROM_SEEK_AUDIO_MSF", 0x00024004 },
      {"IOCTL_CDROM_STOP_AUDIO", 0x00024008 },
      {"IOCTL_CDROM_PAUSE_AUDIO", 0x0002400C },
      {"IOCTL_CDROM_RESUME_AUDIO", 0x00024010 },
      {"IOCTL_CDROM_GET_VOLUME", 0x00024014 },
      {"IOCTL_CDROM_PLAY_AUDIO_MSF", 0x00024018 },
      {"IOCTL_CDROM_SET_VOLUME", 0x00024028 },
      {"IOCTL_CDROM_READ_Q_CHANNEL", 0x0002402C },
      {"IOCTL_CDROM_GET_LAST_SESSION", 0x00024038 },
      {"IOCTL_CDROM_RAW_READ", 0x0002403E },
      {"IOCTL_CDROM_GET_DRIVE_GEOMETRY", 0x0002404C },
      {"IOCTL_CDROM_GET_DRIVE_GEOMETRY_EX", 0x00024050 },
      {"IOCTL_CDROM_READ_TOC_EX", 0x00024054 },
      {"IOCTL_CDROM_GET_CONFIGURATION", 0x00024058 },
      {"IOCTL_CDROM_CHECK_VERIFY", 0x00024800 },
      {"IOCTL_CDROM_MEDIA_REMOVAL", 0x00024804 },
      {"IOCTL_CDROM_EJECT_MEDIA", 0x00024808 },
      {"IOCTL_CDROM_LOAD_MEDIA", 0x0002480C },
      {"IOCTL_CDROM_RESERVE", 0x00024810 },
      {"IOCTL_CDROM_RELEASE", 0x00024814 },
      {"IOCTL_CDROM_FIND_NEW_DEVICES", 0x00024818 },
      {"IOCTL_CDROM_UNLOAD_DRIVER", 0x00025008 },
      {"IOCTL_SCSI_GET_INQUIRY_DATA", 0x0004100C },
      {"IOCTL_SCSI_GET_CAPABILITIES", 0x00041010 },
      {"IOCTL_SCSI_GET_ADDRESS", 0x00041018 },
      {"IOCTL_SCSI_RESCAN_BUS", 0x0004101C },
      {"IOCTL_SCSI_GET_DUMP_POINTERS", 0x00041020 },
      {"IOCTL_SCSI_FREE_DUMP_POINTERS", 0x00041024 },
      {"IOCTL_SCSI_PASS_THROUGH", 0x0004D004 },
      {"IOCTL_SCSI_MINIPORT", 0x0004D008 },
      {"IOCTL_SCSI_PASS_THROUGH_DIRECT", 0x0004D014 },
      {"IOCTL_IDE_PASS_THROUGH", 0x0004D028 },
      {"IOCTL_ATA_PASS_THROUGH", 0x0004D02C },
      {"IOCTL_ATA_PASS_THROUGH_DIRECT", 0x0004D030 },
      {"IOCTL_DISK_GET_DRIVE_GEOMETRY", 0x00070000 },
      {"IOCTL_DISK_VERIFY", 0x00070014 },
      {"IOCTL_DISK_PERFORMANCE", 0x00070020 },
      {"IOCTL_DISK_IS_WRITABLE", 0x00070024 },
      {"IOCTL_DISK_LOGGING", 0x00070028 },
      {"IOCTL_DISK_HISTOGRAM_STRUCTURE", 0x00070030 },
      {"IOCTL_DISK_HISTOGRAM_DATA", 0x00070034 },
      {"IOCTL_DISK_HISTOGRAM_RESET", 0x00070038 },
      {"IOCTL_DISK_REQUEST_STRUCTURE", 0x0007003C },
      {"IOCTL_DISK_REQUEST_DATA", 0x00070040 },
      {"IOCTL_DISK_CONTROLLER_NUMBER", 0x00070044 },
      {"IOCTL_DISK_GET_PARTITION_INFO_EX", 0x00070048 },
      {"IOCTL_DISK_GET_DRIVE_LAYOUT_EX", 0x00070050 },
      {"IOCTL_DISK_PERFORMANCE_OFF", 0x00070060 },
      {"IOCTL_DISK_GET_DRIVE_GEOMETRY_EX", 0x000700A0 },
      {"IOCTL_DISK_UPDATE_PROPERTIES", 0x00070140 },
      {"IOCTL_DISK_SENSE_DEVICE", 0x000703E0 },
      {"IOCTL_DISK_INTERNAL_SET_VERIFY", 0x00070403 },
      {"IOCTL_DISK_INTERNAL_CLEAR_VERIFY", 0x00070407 },
      {"IOCTL_DISK_INTERNAL_SET_NOTIFY", 0x00070408 },
      {"IOCTL_DISK_GET_MEDIA_TYPES", 0x00070C00 },
      {"IOCTL_DISK_GET_PARTITION_INFO", 0x00074004 },
      {"IOCTL_DISK_GET_DRIVE_LAYOUT", 0x0007400C },
      {"IOCTL_DISK_GET_LENGTH_INFO", 0x0007405C },
      {"SMART_GET_VERSION", 0x00074080 },
      {"IOCTL_DISK_GET_CACHE_INFORMATION", 0x000740D4 },
      {"IOCTL_DISK_GET_CACHE_SETTING", 0x000740E0 },
      {"IOCTL_DISK_CHECK_VERIFY", 0x00074800 },
      {"IOCTL_DISK_MEDIA_REMOVAL", 0x00074804 },
      {"IOCTL_DISK_EJECT_MEDIA", 0x00074808 },
      {"IOCTL_DISK_LOAD_MEDIA", 0x0007480C },
      {"IOCTL_DISK_RESERVE", 0x00074810 },
      {"IOCTL_DISK_RELEASE", 0x00074814 },
      {"IOCTL_DISK_FIND_NEW_DEVICES", 0x00074818 },
      {"IOCTL_DISK_SET_PARTITION_INFO", 0x0007C008 },
      {"IOCTL_DISK_SET_DRIVE_LAYOUT", 0x0007C010 },
      {"IOCTL_DISK_FORMAT_TRACKS", 0x0007C018 },
      {"IOCTL_DISK_REASSIGN_BLOCKS", 0x0007C01C },
      {"IOCTL_DISK_FORMAT_TRACKS_EX", 0x0007C02C },
      {"IOCTL_DISK_SET_PARTITION_INFO_EX", 0x0007C04C },
      {"IOCTL_DISK_SET_DRIVE_LAYOUT_EX", 0x0007C054 },
      {"IOCTL_DISK_CREATE_DISK", 0x0007C058 },
      {"SMART_SEND_DRIVE_COMMAND", 0x0007C084 },
      {"SMART_RCV_DRIVE_DATA", 0x0007C088 },
      {"IOCTL_DISK_UPDATE_DRIVE_SIZE", 0x0007C0C8 },
      {"IOCTL_DISK_GROW_PARTITION", 0x0007C0D0 },
      {"IOCTL_DISK_SET_CACHE_INFORMATION", 0x0007C0D8 },
      {"IOCTL_DISK_SET_CACHE_SETTING", 0x0007C0E4 },
      {"IOCTL_DISK_DELETE_DRIVE_LAYOUT", 0x0007C100 },
      {"IOCTL_DISK_FORMAT_DRIVE", 0x0007C3CC },
      {"IOCTL_DISK_SIMBAD", 0x0007D000 },
      {"FSCTL_REQUEST_OPLOCK_LEVEL_1", 0x00090000 },
      {"FSCTL_REQUEST_OPLOCK_LEVEL_2", 0x00090004 },
      {"FSCTL_REQUEST_BATCH_OPLOCK", 0x00090008 },
      {"FSCTL_OPLOCK_BREAK_ACKNOWLEDGE", 0x0009000C },
      {"FSCTL_OPBATCH_ACK_CLOSE_PENDING", 0x00090010 },
      {"FSCTL_OPLOCK_BREAK_NOTIFY", 0x00090014 },
      {"FSCTL_LOCK_VOLUME", 0x00090018 },
      {"FSCTL_UNLOCK_VOLUME", 0x0009001C },
      {"FSCTL_DISMOUNT_VOLUME", 0x00090020 },
      {"FSCTL_IS_VOLUME_MOUNTED", 0x00090028 },
      {"FSCTL_IS_PATHNAME_VALID", 0x0009002C },
      {"FSCTL_MARK_VOLUME_DIRTY", 0x00090030 },
      {"FSCTL_QUERY_RETRIEVAL_POINTERS", 0x0009003B },
      {"FSCTL_GET_COMPRESSION", 0x0009003C },
      {"FSCTL_MARK_AS_SYSTEM_HIVE", 0x0009004F },
      {"FSCTL_OPLOCK_BREAK_ACK_NO_2", 0x00090050 },
      {"FSCTL_INVALIDATE_VOLUMES", 0x00090054 },
      {"FSCTL_QUERY_FAT_BPB", 0x00090058 },
      {"FSCTL_REQUEST_FILTER_OPLOCK", 0x0009005C },
      {"FSCTL_FILESYSTEM_GET_STATISTICS", 0x00090060 },
      {"FSCTL_GET_NTFS_VOLUME_DATA", 0x00090064 },
      {"FSCTL_GET_NTFS_FILE_RECORD", 0x00090068 },
      {"FSCTL_GET_VOLUME_BITMAP", 0x0009006F },
      {"FSCTL_GET_RETRIEVAL_POINTERS", 0x00090073 },
      {"FSCTL_MOVE_FILE", 0x00090074 },
      {"FSCTL_IS_VOLUME_DIRTY", 0x00090078 },
      {"FSCTL_ALLOW_EXTENDED_DASD_IO", 0x00090083 },
      {"FSCTL_FIND_FILES_BY_SID", 0x0009008F },
      {"FSCTL_SET_OBJECT_ID", 0x00090098 },
      {"FSCTL_GET_OBJECT_ID", 0x0009009C },
      {"FSCTL_DELETE_OBJECT_ID", 0x000900A0 },
      {"FSCTL_SET_REPARSE_POINT", 0x000900A4 },
      {"FSCTL_GET_REPARSE_POINT", 0x000900A8 },
      {"FSCTL_DELETE_REPARSE_POINT", 0x000900AC },
      {"FSCTL_ENUM_USN_DATA", 0x000900B3 },
      {"FSCTL_READ_USN_JOURNAL", 0x000900BB },
      {"FSCTL_SET_OBJECT_ID_EXTENDED", 0x000900BC },
      {"FSCTL_CREATE_OR_GET_OBJECT_ID", 0x000900C0 },
      {"FSCTL_SET_SPARSE", 0x000900C4 },
      {"FSCTL_SET_ENCRYPTION", 0x000900D7 },
      {"FSCTL_ENCRYPTION_FSCTL_IO", 0x000900DB },
      {"FSCTL_WRITE_RAW_ENCRYPTED", 0x000900DF },
      {"FSCTL_READ_RAW_ENCRYPTED", 0x000900E3 },
      {"FSCTL_CREATE_USN_JOURNAL", 0x000900E7 },
      {"FSCTL_READ_FILE_USN_DATA", 0x000900EB },
      {"FSCTL_WRITE_USN_CLOSE_RECORD", 0x000900EF },
      {"FSCTL_EXTEND_VOLUME", 0x000900F0 },
      {"FSCTL_QUERY_USN_JOURNAL", 0x000900F4 },
      {"FSCTL_DELETE_USN_JOURNAL", 0x000900F8 },
      {"FSCTL_MARK_HANDLE", 0x000900FC },
      {"FSCTL_SIS_COPYFILE", 0x00090100 },
      {"FSCTL_RECALL_FILE", 0x00090117 },
      {"FSCTL_FILE_PREFETCH", 0x00090120 },
      {"FSCTL_SECURITY_ID_CHECK", 0x000940B7 },
      {"FSCTL_QUERY_ALLOCATED_RANGES", 0x000940CF },
      {"FSCTL_READ_FROM_PLEX", 0x0009411E },
      {"FSCTL_SET_ZERO_DATA", 0x000980C8 },
      {"FSCTL_SET_COMPRESSION", 0x0009C040 },
      {"FSCTL_SIS_LINK_FILES", 0x0009C104 },
      {"FSCTL_HSM_MSG", 0x0009C108 },
      {"FSCTL_HSM_DATA", 0x0009C113 },
      {"IOCTL_KEYBOARD_QUERY_ATTRIBUTES", 0x000B0000 },
      {"IOCTL_HID_GET_DEVICE_DESCRIPTOR", 0x000B0003 },
      {"IOCTL_KEYBOARD_SET_TYPEMATIC", 0x000B0004 },
      {"IOCTL_HID_GET_REPORT_DESCRIPTOR", 0x000B0007 },
      {"IOCTL_KEYBOARD_SET_INDICATORS", 0x000B0008 },
      {"IOCTL_HID_READ_REPORT", 0x000B000B },
      {"IOCTL_HID_WRITE_REPORT", 0x000B000F },
      {"IOCTL_HID_GET_STRING", 0x000B0013 },
      {"IOCTL_HID_ACTIVATE_DEVICE", 0x000B001F },
      {"IOCTL_KEYBOARD_QUERY_TYPEMATIC", 0x000B0020 },
      {"IOCTL_HID_DEACTIVATE_DEVICE", 0x000B0023 },
      {"IOCTL_HID_GET_DEVICE_ATTRIBUTES", 0x000B0027 },
      {"IOCTL_KEYBOARD_QUERY_INDICATORS", 0x000B0040 },
      {"IOCTL_KEYBOARD_QUERY_INDICATOR_TRANSLATION", 0x000B0080 },
      {"IOCTL_KEYBOARD_INSERT_DATA", 0x000B0100 },
      {"IOCTL_HID_SET_FEATURE", 0x000B0191 },
      {"IOCTL_HID_GET_FEATURE", 0x000B0192 },
      {"IOCTL_HID_GET_COLLECTION_DESCRIPTOR", 0x000B0193 },
      {"IOCTL_HID_SET_OUTPUT_REPORT", 0x000B0195 },
      {"IOCTL_HID_FLUSH_QUEUE", 0x000B0197 },
      {"IOCTL_HID_GET_POLL_FREQUENCY_MSEC", 0x000B0198 },
      {"IOCTL_GET_PHYSICAL_DESCRIPTOR", 0x000B019A },
      {"IOCTL_HID_SET_POLL_FREQUENCY_MSEC", 0x000B019C },
      {"IOCTL_HID_GET_HARDWARE_ID", 0x000B019E },
      {"IOCTL_GET_NUM_DEVICE_INPUT_BUFFERS", 0x000B01A0 },
      {"IOCTL_HID_GET_INPUT_REPORT", 0x000B01A2 },
      {"IOCTL_HID_GET_COLLECTION_INFORMATION", 0x000B01A8 },
      {"IOCTL_HID_GET_MANUFACTURER_STRING", 0x000B01BA },
      {"IOCTL_HID_GET_PRODUCT_STRING", 0x000B01BE },
      {"IOCTL_HID_GET_SERIALNUMBER_STRING", 0x000B01C2 },
      {"IOCTL_HID_GET_INDEXED_STRING", 0x000B01E2 },
      {"IOCTL_INTERNAL_KEYBOARD_CONNECT", 0x000B0203 },
      {"IOCTL_HID_ENABLE_SECURE_READ", 0x000B020B },
      {"IOCTL_HID_DISABLE_SECURE_READ", 0x000B020F },
      {"IOCTL_INTERNAL_KEYBOARD_DISCONNECT", 0x000B0403 },
      {"IOCTL_KEYBOARD_QUERY_IME_STATUS", 0x000B1000 },
      {"IOCTL_KEYBOARD_SET_IME_STATUS", 0x000B1004 },
      {"IOCTL_INTERNAL_I8042_HOOK_KEYBOARD", 0x000B3FC3 },
      {"IOCTL_INTERNAL_I8042_KEYBOARD_WRITE_BUFFER", 0x000B3FC7 },
      {"IOCTL_INTERNAL_I8042_CONTROLLER_WRITE_BUFFER", 0x000B3FCB },
      {"IOCTL_INTERNAL_I8042_KEYBOARD_START_INFORMATION", 0x000B3FCF },
      {"IOCTL_INTERNAL_MOUSE_CONNECT", 0x000F0203 },
      {"IOCTL_INTERNAL_MOUSE_DISCONNECT", 0x000F0403 },
      {"IOCTL_INTERNAL_I8042_HOOK_MOUSE", 0x000F3FC3 },
      {"IOCTL_INTERNAL_I8042_MOUSE_WRITE_BUFFER", 0x000F3FC7 },
      {"IOCTL_INTERNAL_I8042_MOUSE_START_INFORMATION", 0x000F3FCF },
      {"IOCTL_PF_SET_EXTENSION_POINTER", 0x00128058 },
      {"IOCTL_PAR_QUERY_INFORMATION", 0x00160004 },
      {"IOCTL_PAR_SET_INFORMATION", 0x00160008 },
      {"IOCTL_PAR_QUERY_DEVICE_ID", 0x0016000C },
      {"IOCTL_PAR_QUERY_DEVICE_ID_SIZE", 0x00160010 },
      {"IOCTL_IEEE1284_GET_MODE", 0x00160014 },
      {"IOCTL_IEEE1284_NEGOTIATE", 0x00160018 },
      {"IOCTL_PAR_SET_WRITE_ADDRESS", 0x0016001C },
      {"IOCTL_PAR_SET_READ_ADDRESS", 0x00160020 },
      {"IOCTL_PAR_GET_DEVICE_CAPS", 0x00160024 },
      {"IOCTL_PAR_GET_DEFAULT_MODES", 0x00160028 },
      {"IOCTL_PAR_PING", 0x0016002C },
      {"IOCTL_PAR_QUERY_RAW_DEVICE_ID", 0x00160030 },
      {"IOCTL_PAR_ECP_HOST_RECOVERY", 0x00160034 },
      {"IOCTL_PAR_GET_READ_ADDRESS", 0x00160038 },
      {"IOCTL_PAR_GET_WRITE_ADDRESS", 0x0016003C },
      {"IOCTL_INTERNAL_GET_MORE_PARALLEL_PORT_INFO", 0x00160044 },
      {"IOCTL_INTERNAL_PARALLEL_SET_CHIP_MODE", 0x0016004C },
      {"IOCTL_PAR_TEST", 0x00160050 },
      {"IOCTL_PAR_IS_PORT_FREE", 0x00160054 },
      {"IOCTL_PAR_QUERY_LOCATION", 0x00160058 },
      {"IOCTL_INTERNAL_SELECT_DEVICE", 0x0016005C },
      {"IOCTL_INTERNAL_DESELECT_DEVICE", 0x00160060 },
      {"IOCTL_INTERNAL_PARCLASS_CONNECT", 0x00160078 },
      {"IOCTL_INTERNAL_PARCLASS_DISCONNECT", 0x0016007C },
      {"IOCTL_INTERNAL_DISCONNECT_IDLE", 0x00160080 },
      {"IOCTL_INTERNAL_LOCK_PORT", 0x00160094 },
      {"IOCTL_INTERNAL_UNLOCK_PORT", 0x00160098 },
      {"IOCTL_INTERNAL_PARALLEL_PORT_FREE", 0x001600A0 },
      {"IOCTL_INTERNAL_LOCK_PORT_NO_SELECT", 0x001600D0 },
      {"IOCTL_INTERNAL_UNLOCK_PORT_NO_DESELECT", 0x001600D4 },
      {"IOCTL_NDIS_QUERY_GLOBAL_STATS", 0x00170002 },
      {"IOCTL_NDIS_QUERY_ALL_STATS", 0x00170006 },
      {"IOCTL_NDIS_DO_PNP_OPERATION", 0x00170008 },
      {"IOCTL_NDIS_QUERY_SELECTED_STATS", 0x0017000E },
      {"IOCTL_NDIS_ENUMERATE_INTERFACES", 0x00170010 },
      {"IOCTL_NDIS_ADD_TDI_DEVICE", 0x00170014 },
      {"IOCTL_NDIS_GET_LOG_DATA", 0x0017001E },
      {"IOCTL_NDIS_GET_VERSION", 0x00170020 },
      {"IOCTL_SCSISCAN_CMD", 0x00190012 },
      {"IOCTL_SCSISCAN_LOCKDEVICE", 0x00190016 },
      {"IOCTL_SCSISCAN_UNLOCKDEVICE", 0x0019001A },
      {"IOCTL_SCSISCAN_SET_TIMEOUT", 0x0019001C },
      {"IOCTL_SCSISCAN_GET_INFO", 0x00190022 },
      {"IOCTL_SERIAL_INTERNAL_DO_WAIT_WAKE", 0x001B0004 },
      {"IOCTL_SERIAL_INTERNAL_CANCEL_WAIT_WAKE", 0x001B0008 },
      {"IOCTL_SERIAL_INTERNAL_BASIC_SETTINGS", 0x001B000C },
      {"IOCTL_SERIAL_INTERNAL_RESTORE_SETTINGS", 0x001B0010 },
      {"IOCTL_SERIAL_SET_BREAK_OFF", 0x001B0014 },
      {"IOCTL_SERIAL_IMMEDIATE_CHAR", 0x001B0018 },
      {"IOCTL_SERIAL_SET_TIMEOUTS", 0x001B001C },
      {"IOCTL_SERIAL_GET_TIMEOUTS", 0x001B0020 },
      {"IOCTL_SERIAL_SET_DTR", 0x001B0024 },
      {"IOCTL_SERIAL_CLR_DTR", 0x001B0028 },
      {"IOCTL_SERIAL_RESET_DEVICE", 0x001B002C },
      {"IOCTL_SERIAL_SET_RTS", 0x001B0030 },
      {"IOCTL_SERIAL_CLR_RTS", 0x001B0034 },
      {"IOCTL_SERIAL_SET_XOFF", 0x001B0038 },
      {"IOCTL_SERIAL_SET_XON", 0x001B003C },
      {"IOCTL_SERIAL_GET_WAIT_MASK", 0x001B0040 },
      {"IOCTL_SERIAL_SET_WAIT_MASK", 0x001B0044 },
      {"IOCTL_SERIAL_WAIT_ON_MASK", 0x001B0048 },
      {"IOCTL_SERIAL_PURGE", 0x001B004C },
      {"IOCTL_SERIAL_GET_BAUD_RATE", 0x001B0050 },
      {"IOCTL_SERIAL_GET_LINE_CONTROL", 0x001B0054 },
      {"IOCTL_SERIAL_GET_CHARS", 0x001B0058 },
      {"IOCTL_SERIAL_SET_CHARS", 0x001B005C },
      {"IOCTL_SERIAL_GET_HANDFLOW", 0x001B0060 },
      {"IOCTL_SERIAL_SET_HANDFLOW", 0x001B0064 },
      {"IOCTL_SERIAL_GET_MODEMSTATUS", 0x001B0068 },
      {"IOCTL_SERIAL_GET_COMMSTATUS", 0x001B006C },
      {"IOCTL_SERIAL_XOFF_COUNTER", 0x001B0070 },
      {"IOCTL_SERIAL_GET_PROPERTIES", 0x001B0074 },
      {"IOCTL_SERIAL_GET_DTRRTS", 0x001B0078 },
      {"IOCTL_SERIAL_LSRMST_INSERT", 0x001B007C },
      {"IOCTL_SERIAL_CONFIG_SIZE", 0x001B0080 },
      {"IOCTL_SERIAL_GET_COMMCONFIG", 0x001B0084 },
      {"IOCTL_SERIAL_SET_COMMCONFIG", 0x001B0088 },
      {"IOCTL_SERIAL_GET_STATS", 0x001B008C },
      {"IOCTL_SERIAL_CLEAR_STATS", 0x001B0090 },
      {"IOCTL_SERIAL_GET_MODEM_CONTROL", 0x001B0094 },
      {"IOCTL_SERIAL_SET_MODEM_CONTROL", 0x001B0098 },
      {"IOCTL_SERIAL_SET_FIFO_CONTROL", 0x001B009C },
      {"IOCTL_TAPE_PREPARE", 0x001F4004 },
      {"IOCTL_TAPE_GET_POSITION", 0x001F400C },
      {"IOCTL_TAPE_SET_POSITION", 0x001F4010 },
      {"IOCTL_TAPE_GET_DRIVE_PARAMS", 0x001F4014 },
      {"IOCTL_TAPE_GET_MEDIA_PARAMS", 0x001F401C },
      {"IOCTL_TAPE_SET_MEDIA_PARAMS", 0x001F4020 },
      {"IOCTL_TAPE_GET_STATUS", 0x001F4024 },
      {"IOCTL_TAPE_MEDIA_REMOVAL", 0x001F4804 },
      {"IOCTL_TAPE_EJECT_MEDIA", 0x001F4808 },
      {"IOCTL_TAPE_LOAD_MEDIA", 0x001F480C },
      {"IOCTL_TAPE_RESERVE", 0x001F4810 },
      {"IOCTL_TAPE_RELEASE", 0x001F4814 },
      {"IOCTL_TAPE_ERASE", 0x001FC000 },
      {"IOCTL_TAPE_WRITE_MARKS", 0x001FC008 },
      {"IOCTL_TAPE_SET_DRIVE_PARAMS", 0x001FC018 },
      {"IOCTL_TAPE_CREATE_PARTITION", 0x001FC028 },
      {"IOCTL_TDI_ACCEPT", 0x00210000 },
      {"IOCTL_TDI_CONNECT", 0x00210004 },
      {"IOCTL_TDI_DISCONNECT", 0x00210008 },
      {"IOCTL_TDI_LISTEN", 0x0021000C },
      {"IOCTL_TDI_QUERY_INFORMATION", 0x00210012 },
      {"IOCTL_TDI_RECEIVE", 0x00210016 },
      {"IOCTL_TDI_RECEIVE_DATAGRAM", 0x0021001A },
      {"IOCTL_TDI_SEND", 0x0021001D },
      {"IOCTL_TDI_SEND_DATAGRAM", 0x00210021 },
      {"IOCTL_TDI_SET_EVENT_HANDLER", 0x00210024 },
      {"IOCTL_TDI_SET_INFORMATION", 0x00210029 },
      {"IOCTL_TDI_ASSOCIATE_ADDRESS", 0x0021002C },
      {"IOCTL_TDI_DISASSOCIATE_ADDRESS", 0x00210030 },
      {"IOCTL_TDI_ACTION", 0x00210036 },
      {"IOCTL_INTERNAL_USB_SUBMIT_URB", 0x00220003 },
      {"IOCTL_INTERNAL_USB_RESET_PORT", 0x00220007 },
      {"IOCTL_INTERNAL_USB_GET_ROOTHUB_PDO", 0x0022000F },
      {"IOCTL_INTERNAL_USB_GET_PORT_STATUS", 0x00220013 },
      {"IOCTL_INTERNAL_USB_ENABLE_PORT", 0x00220017 },
      {"IOCTL_INTERNAL_USB_GET_HUB_COUNT", 0x0022001B },
      {"IOCTL_INTERNAL_USB_CYCLE_PORT", 0x0022001F },
      {"IOCTL_INTERNAL_USB_GET_HUB_NAME", 0x00220020 },
      {"IOCTL_INTERNAL_USB_SUBMIT_IDLE_NOTIFICATION", 0x00220027 },
      {"IOCTL_USBPRINT_VENDOR_SET_COMMAND", 0x00220038 },
      {"IOCTL_USBPRINT_VENDOR_GET_COMMAND", 0x0022003C },
      {"IOCTL_1394_CLASS", 0x0022021D },
      {"IOCTL_USB_HCD_GET_STATS_1", 0x002203FC },
      {"IOCTL_IEEE1394_API_REQUEST", 0x00220400 },
      {"IOCTL_USB_DIAGNOSTIC_MODE_OFF", 0x00220404 },
      {"IOCTL_USB_GET_NODE_INFORMATION", 0x00220408 },
      {"IOCTL_USB_GET_NODE_CONNECTION_INFORMATION", 0x0022040C },
      {"IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION", 0x00220410 },
      {"IOCTL_USB_GET_NODE_CONNECTION_NAME", 0x00220414 },
      {"IOCTL_USB_DIAG_IGNORE_HUBS_ON", 0x00220418 },
      {"IOCTL_USB_DIAG_IGNORE_HUBS_OFF", 0x0022041C },
      {"IOCTL_INTERNAL_USB_GET_BUS_INFO", 0x00220420 },
      {"IOCTL_GET_HCD_DRIVERKEY_NAME", 0x00220424 },
      {"IOCTL_INTERNAL_USB_GET_BUSGUID_INFO", 0x00220428 },
      {"IOCTL_INTERNAL_USB_GET_PARENT_HUB_INFO", 0x0022042C },
      {"IOCTL_USB_HCD_DISABLE_PORT", 0x00220430 },
      {"IOCTL_INTERNAL_USB_GET_DEVICE_HANDLE", 0x00220433 },
      {"IOCTL_USB_HCD_ENABLE_PORT", 0x00220434 },
      {"IOCTL_USB_GET_HUB_CAPABILITIES", 0x0022043C },
      {"IOCTL_USB_GET_NODE_CONNECTION_ATTRIBUTES", 0x00220440 },
      {"IOCTL_USB_HUB_CYCLE_PORT", 0x00220444 },
      {"IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX", 0x00220448 },
      {"IOCTL_VIDEO_ENABLE_VDM", 0x00230000 },
      {"IOCTL_VIDEO_DISABLE_VDM", 0x00230004 },
      {"IOCTL_VIDEO_REGISTER_VDM", 0x00230008 },
      {"IOCTL_VIDEO_SET_OUTPUT_DEVICE_POWER_STATE", 0x0023000C },
      {"IOCTL_VIDEO_GET_OUTPUT_DEVICE_POWER_STATE", 0x00230010 },
      {"IOCTL_VIDEO_MONITOR_DEVICE", 0x00230014 },
      {"IOCTL_VIDEO_ENUM_MONITOR_PDO", 0x00230018 },
      {"IOCTL_VIDEO_INIT_WIN32K_CALLBACKS", 0x0023001C },
      {"IOCTL_VIDEO_HANDLE_VIDEOPARAMETERS", 0x00230020 },
      {"IOCTL_VIDEO_IS_VGA_DEVICE", 0x00230024 },
      {"IOCTL_VIDEO_USE_DEVICE_IN_SESSION", 0x00230028 },
      {"IOCTL_VIDEO_PREPARE_FOR_EARECOVERY", 0x0023002C },
      {"IOCTL_VIDEO_SAVE_HARDWARE_STATE", 0x00230200 },
      {"IOCTL_VIDEO_RESTORE_HARDWARE_STATE", 0x00230204 },
      {"IOCTL_VIDEO_QUERY_AVAIL_MODES", 0x00230400 },
      {"IOCTL_VIDEO_QUERY_NUM_AVAIL_MODES", 0x00230404 },
      {"IOCTL_VIDEO_QUERY_CURRENT_MODE", 0x00230408 },
      {"IOCTL_VIDEO_SET_CURRENT_MODE", 0x0023040C },
      {"IOCTL_VIDEO_RESET_DEVICE", 0x00230410 },
      {"IOCTL_VIDEO_LOAD_AND_SET_FONT", 0x00230414 },
      {"IOCTL_VIDEO_SET_PALETTE_REGISTERS", 0x00230418 },
      {"IOCTL_VIDEO_SET_COLOR_REGISTERS", 0x0023041C },
      {"IOCTL_VIDEO_ENABLE_CURSOR", 0x00230420 },
      {"IOCTL_VIDEO_DISABLE_CURSOR", 0x00230424 },
      {"IOCTL_VIDEO_SET_CURSOR_ATTR", 0x00230428 },
      {"IOCTL_VIDEO_QUERY_CURSOR_ATTR", 0x0023042C },
      {"IOCTL_VIDEO_SET_CURSOR_POSITION", 0x00230430 },
      {"IOCTL_VIDEO_QUERY_CURSOR_POSITION", 0x00230434 },
      {"IOCTL_VIDEO_ENABLE_POINTER", 0x00230438 },
      {"IOCTL_VIDEO_DISABLE_POINTER", 0x0023043C },
      {"IOCTL_VIDEO_SET_POINTER_ATTR", 0x00230440 },
      {"IOCTL_VIDEO_QUERY_POINTER_ATTR", 0x00230444 },
      {"IOCTL_VIDEO_SET_POINTER_POSITION", 0x00230448 },
      {"IOCTL_VIDEO_QUERY_POINTER_POSITION", 0x0023044C },
      {"IOCTL_VIDEO_QUERY_POINTER_CAPABILITIES", 0x00230450 },
      {"IOCTL_VIDEO_GET_BANK_SELECT_CODE", 0x00230454 },
      {"IOCTL_VIDEO_MAP_VIDEO_MEMORY", 0x00230458 },
      {"IOCTL_VIDEO_UNMAP_VIDEO_MEMORY", 0x0023045C },
      {"IOCTL_VIDEO_QUERY_PUBLIC_ACCESS_RANGES", 0x00230460 },
      {"IOCTL_VIDEO_FREE_PUBLIC_ACCESS_RANGES", 0x00230464 },
      {"IOCTL_VIDEO_QUERY_COLOR_CAPABILITIES", 0x00230468 },
      {"IOCTL_VIDEO_SET_POWER_MANAGEMENT", 0x0023046C },
      {"IOCTL_VIDEO_GET_POWER_MANAGEMENT", 0x00230470 },
      {"IOCTL_VIDEO_SHARE_VIDEO_MEMORY", 0x00230474 },
      {"IOCTL_VIDEO_UNSHARE_VIDEO_MEMORY", 0x00230478 },
      {"IOCTL_VIDEO_SET_COLOR_LUT_DATA", 0x0023047C },
      {"IOCTL_VIDEO_GET_CHILD_STATE", 0x00230480 },
      {"IOCTL_VIDEO_VALIDATE_CHILD_STATE_CONFIGURATION", 0x00230484 },
      {"IOCTL_VIDEO_SET_CHILD_STATE_CONFIGURATION", 0x00230488 },
      {"IOCTL_VIDEO_SWITCH_DUALVIEW", 0x0023048C },
      {"IOCTL_VIDEO_SET_BANK_POSITION", 0x00230490 },
      {"IOCTL_BATTERY_QUERY_TAG", 0x00294040 },
      {"IOCTL_BATTERY_QUERY_INFORMATION", 0x00294044 },
      {"IOCTL_BATTERY_QUERY_STATUS", 0x0029404C },
      {"IOCTL_BATTERY_SET_INFORMATION", 0x00298048 },
      {"IOCTL_GAMEENUM_EXPOSE_HARDWARE", 0x002A0000 },
      {"IOCTL_GAMEENUM_REMOVE_HARDWARE", 0x002A0004 },
      {"IOCTL_GAMEENUM_PORT_DESC", 0x002A0008 },
      {"IOCTL_GAMEENUM_PORT_PARAMETERS", 0x002A0403 },
      {"IOCTL_GAMEENUM_EXPOSE_SIBLING", 0x002A0407 },
      {"IOCTL_GAMEENUM_REMOVE_SELF", 0x002A040B },
      {"IOCTL_GAMEENUM_ACQUIRE_ACCESSORS", 0x002A040F },
      {"IOCTL_STORAGE_CHECK_VERIFY2", 0x002D0800 },
      {"IOCTL_STORAGE_LOAD_MEDIA2", 0x002D080C },
      {"IOCTL_STORAGE_EJECTION_CONTROL", 0x002D0940 },
      {"IOCTL_STORAGE_MCN_CONTROL", 0x002D0944 },
      {"IOCTL_STORAGE_GET_MEDIA_TYPES", 0x002D0C00 },
      {"IOCTL_STORAGE_GET_MEDIA_TYPES_EX", 0x002D0C04 },
      {"IOCTL_STORAGE_GET_MEDIA_SERIAL_NUMBER", 0x002D0C10 },
      {"IOCTL_STORAGE_GET_HOTPLUG_INFO", 0x002D0C14 },
      {"IOCTL_STORAGE_GET_DEVICE_NUMBER", 0x002D1080 },
      {"IOCTL_STORAGE_PREDICT_FAILURE", 0x002D1100 },
      {"IOCTL_STORAGE_QUERY_PROPERTY", 0x002D1400 },
      {"IOCTL_STORAGE_SET_READ_AHEAD", 0x002D4400 },
      {"IOCTL_STORAGE_CHECK_VERIFY", 0x002D4800 },
      {"IOCTL_STORAGE_MEDIA_REMOVAL", 0x002D4804 },
      {"IOCTL_STORAGE_EJECT_MEDIA", 0x002D4808 },
      {"IOCTL_STORAGE_LOAD_MEDIA", 0x002D480C },
      {"IOCTL_STORAGE_RESERVE", 0x002D4810 },
      {"IOCTL_STORAGE_RELEASE", 0x002D4814 },
      {"IOCTL_STORAGE_FIND_NEW_DEVICES", 0x002D4818 },
      {"IOCTL_STORAGE_RESET_BUS", 0x002D5000 },
      {"IOCTL_STORAGE_RESET_DEVICE", 0x002D5004 },
      {"IOCTL_STORAGE_BREAK_RESERVATION", 0x002D5014 },
      {"IOCTL_STORAGE_SET_HOTPLUG_INFO", 0x002DCC18 },
      {"OBSOLETE_DISK_GET_WRITE_CACHE_STATE", 0x00475356 },
      {"OBSOLETE_IOCTL_CDROM_GET_CONTROL", 0x00147508 },
      {"OBSOLETE_IOCTL_STORAGE_RESET_BUS", 0x002DD000 },
      {"OBSOLETE_IOCTL_STORAGE_RESET_DEVICE", 0x002DD004 },
      {"IOCTL_KS_PROPERTY", 0x002F0003 },
      {"IOCTL_KS_ENABLE_EVENT", 0x002F0007 },
      {"IOCTL_KS_DISABLE_EVENT", 0x002F000B },
      {"IOCTL_KS_METHOD", 0x002F000F },
      {"IOCTL_KS_RESET_STATE", 0x002F001B },
      {"IOCTL_KS_HANDSHAKE", 0x002F001F },
      {"IOCTL_KS_READ_STREAM", 0x002F4017 },
      {"IOCTL_KS_WRITE_STREAM", 0x002F8013 },
      {"IOCTL_CHANGER_GET_PARAMETERS", 0x00304000 },
      {"IOCTL_CHANGER_GET_STATUS", 0x00304004 },
      {"IOCTL_CHANGER_GET_PRODUCT_DATA", 0x00304008 },
      {"IOCTL_CHANGER_INITIALIZE_ELEMENT_STATUS", 0x00304018 },
      {"IOCTL_CHANGER_SET_POSITION", 0x0030401C },
      {"IOCTL_CHANGER_EXCHANGE_MEDIUM", 0x00304020 },
      {"IOCTL_CHANGER_MOVE_MEDIUM", 0x00304024 },
      {"IOCTL_CHANGER_REINITIALIZE_TRANSPORT", 0x00304028 },
      {"IOCTL_CHANGER_SET_ACCESS", 0x0030C010 },
      {"IOCTL_CHANGER_GET_ELEMENT_STATUS", 0x0030C014 },
      {"IOCTL_CHANGER_QUERY_VOLUME_TAGS", 0x0030C02C },
      {"IOCTL_SMARTCARD_POWER", 0x00310004 },
      {"IOCTL_SMARTCARD_GET_ATTRIBUTE", 0x00310008 },
      {"IOCTL_SMARTCARD_SET_ATTRIBUTE", 0x0031000C },
      {"IOCTL_SMARTCARD_CONFISCATE", 0x00310010 },
      {"IOCTL_SMARTCARD_TRANSMIT", 0x00310014 },
      {"IOCTL_SMARTCARD_EJECT", 0x00310018 },
      {"IOCTL_SMARTCARD_SWALLOW", 0x0031001C },
      {"IOCTL_SMARTCARD_IS_PRESENT", 0x00310028 },
      {"IOCTL_SMARTCARD_IS_ABSENT", 0x0031002C },
      {"IOCTL_SMARTCARD_SET_PROTOCOL", 0x00310030 },
      {"IOCTL_SMARTCARD_GET_STATE", 0x00310038 },
      {"IOCTL_SMARTCARD_GET_LAST_ERROR", 0x0031003C },
      {"IOCTL_SMARTCARD_GET_PERF_CNTR", 0x00310040 },
      {"IOCTL_DVD_START_SESSION", 0x00335000 },
      {"IOCTL_DVD_READ_KEY", 0x00335004 },
      {"IOCTL_DVD_SEND_KEY", 0x00335008 },
      {"IOCTL_DVD_END_SESSION", 0x0033500C },
      {"IOCTL_DVD_SET_READ_AHEAD", 0x00335010 },
      {"IOCTL_DVD_GET_REGION", 0x00335014 },
      {"IOCTL_DVD_READ_STRUCTURE", 0x00335140 },
      {"IOCTL_DVD_SEND_KEY2", 0x0033D018 },
      {"IOCTL_FSVIDEO_COPY_FRAME_BUFFER", 0x00340800 },
      {"IOCTL_FSVIDEO_WRITE_TO_FRAME_BUFFER", 0x00340804 },
      {"IOCTL_FSVIDEO_REVERSE_MOUSE_POINTER", 0x00340808 },
      {"IOCTL_FSVIDEO_SET_CURRENT_MODE", 0x0034080C },
      {"IOCTL_FSVIDEO_SET_SCREEN_INFORMATION", 0x00340810 },
      {"IOCTL_FSVIDEO_SET_CURSOR_POSITION", 0x00340814 },
      {"IOCTL_SERENUM_EXPOSE_HARDWARE", 0x00370200 },
      {"IOCTL_SERENUM_REMOVE_HARDWARE", 0x00370204 },
      {"IOCTL_INTERNAL_SERENUM_REMOVE_SELF", 0x00370207 },
      {"IOCTL_SERENUM_PORT_DESC", 0x00370208 },
      {"IOCTL_SERENUM_GET_PORT_NAME", 0x0037020C },
      {"IOCTL_DOT4_OPEN_CHANNEL", 0x003A2006 },
      {"IOCTL_DOT4_CLOSE_CHANNEL", 0x003A2008 },
      {"IOCTL_DOT4_READ", 0x003A200E },
      {"IOCTL_DOT4_WRITE", 0x003A2011 },
      {"IOCTL_DOT4_ADD_ACTIVITY_BROADCAST", 0x003A2014 },
      {"IOCTL_DOT4_REMOVE_ACTIVITY_BROADCAST", 0x003A2018 },
      {"IOCTL_DOT4_WAIT_ACTIVITY_BROADCAST", 0x003A201E },
      {"IOCTL_DOT4_CREATE_SOCKET", 0x003A2022 },
      {"IOCTL_DOT4_WAIT_FOR_CHANNEL", 0x003A2026 },
      {"IOCTL_DOT4_DESTROY_SOCKET", 0x003A202A },
      {"IOCTL_SA_GET_VERSION", 0x00412002 },
      {"IOCTL_SA_GET_CAPABILITIES", 0x00412006 },
      {"IOCTL_NVRAM_WRITE_BOOT_COUNTER", 0x00412026 },
      {"IOCTL_NVRAM_READ_BOOT_COUNTER", 0x0041202A },
      {"IOCTL_SADISPLAY_LOCK", 0x00412032 },
      {"IOCTL_SADISPLAY_UNLOCK", 0x00412036 },
      {"IOCTL_SADISPLAY_BUSY_MESSAGE", 0x0041203A },
      {"IOCTL_SADISPLAY_SHUTDOWN_MESSAGE", 0x0041203E },
      {"IOCTL_SADISPLAY_CHANGE_LANGUAGE", 0x00412042 },
      {"IOCTL_FUNC_DISPLAY_STORE_BITMAP", 0x00412046 },
      {"IOCTL_MOUNTDEV_QUERY_UNIQUE_ID", 0x004D0000 },
      {"IOCTL_MOUNTDEV_QUERY_DEVICE_NAME", 0x004D0008 },
      {"IOCTL_MOUNTDEV_QUERY_SUGGESTED_LINK_NAME", 0x004D000C },
      {"IOCTL_MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY", 0x004DC004 },
      {"IOCTL_MOUNTDEV_LINK_CREATED", 0x004DC010 },
      {"IOCTL_MOUNTDEV_LINK_DELETED", 0x004DC014 },
      {"IOCTL_VOLUME_GET_VOLUME_DISK_EXTENTS", 0x00560000 },
      {"IOCTL_VOLUME_SUPPORTS_ONLINE_OFFLINE", 0x00560004 },
      {"IOCTL_VOLUME_IS_OFFLINE", 0x00560010 },
      {"IOCTL_VOLUME_IS_IO_CAPABLE", 0x00560014 },
      {"IOCTL_VOLUME_QUERY_FAILOVER_SET", 0x00560018 },
      {"IOCTL_VOLUME_QUERY_VOLUME_NUMBER", 0x0056001C },
      {"IOCTL_VOLUME_LOGICAL_TO_PHYSICAL", 0x00560020 },
      {"IOCTL_VOLUME_PHYSICAL_TO_LOGICAL", 0x00560024 },
      {"IOCTL_VOLUME_IS_PARTITION", 0x00560028 },
      {"IOCTL_VOLUME_IS_CLUSTERED", 0x00560030 },
      {"IOCTL_VOLUME_SET_GPT_ATTRIBUTES", 0x00560034 },
      {"IOCTL_VOLUME_GET_GPT_ATTRIBUTES", 0x00560038 },
      {"IOCTL_VOLUME_READ_PLEX", 0x0056402E },
      {"IOCTL_VOLUME_ONLINE", 0x0056C008 },
      {"IOCTL_VOLUME_OFFLINE", 0x0056C00C },
      {"FT_INITIALIZE_SET", 0x00660000 },
      {"FT_REGENERATE", 0x00660004 },
      {"FT_CONFIGURE", 0x0066000B },
      {"FT_VERIFY", 0x0066000C },
      {"FT_BALANCED_READ_MODE", 0x0066001B },
      {"FT_SYNC_REDUNDANT_COPY", 0x0066001C },
      {"FT_SEQUENTIAL_WRITE_MODE", 0x00660023 },
      {"FT_PARALLEL_WRITE_MODE", 0x00660027 },
      {"FT_QUERY_SET_STATE", 0x00660028 },
      {"FT_CLUSTER_SET_MEMBER_STATE", 0x0066002C },
      {"FT_CLUSTER_GET_MEMBER_STATE", 0x00660030 },
      {"FT_SECONDARY_READ", 0x00664012 },
      {"FT_PRIMARY_READ", 0x00664016 },
      {"FT_ENUMERATE_LOGICAL_DISKS", 0x00674008 },
      {"FT_QUERY_LOGICAL_DISK_INFORMATION", 0x0067400C },
      {"FT_QUERY_NT_DEVICE_NAME_FOR_LOGICAL_DISK", 0x00674018 },
      {"FT_QUERY_DRIVE_LETTER_FOR_LOGICAL_DISK", 0x00674020 },
      {"FT_CHECK_IO", 0x00674024 },
      {"FT_QUERY_NT_DEVICE_NAME_FOR_PARTITION", 0x00674030 },
      {"FT_CHANGE_NOTIFY", 0x00674034 },
      {"FT_QUERY_LOGICAL_DISK_ID", 0x00674190 },
      {"FT_CREATE_LOGICAL_DISK", 0x0067C000 },
      {"FT_BREAK_LOGICAL_DISK", 0x0067C004 },
      {"FT_ORPHAN_LOGICAL_DISK_MEMBER", 0x0067C010 },
      {"FT_REPLACE_LOGICAL_DISK_MEMBER", 0x0067C014 },
      {"FT_INITIALIZE_LOGICAL_DISK", 0x0067C01C },
      {"FT_SET_DRIVE_LETTER_FOR_LOGICAL_DISK", 0x0067C028 },
      {"FT_STOP_SYNC_OPERATIONS", 0x0067C038 },
      {"FT_CREATE_PARTITION_LOGICAL_DISK", 0x0067C194 },
      {"IOCTL_MOUNTMGR_QUERY_POINTS", 0x006D0008 },
      {"IOCTL_MOUNTMGR_CHANGE_NOTIFY", 0x006D4020 },
      {"IOCTL_MOUNTMGR_CHECK_UNPROCESSED_VOLUMES", 0x006D4028 },
      {"IOCTL_MOUNTMGR_VOLUME_ARRIVAL_NOTIFICATION", 0x006D402C },
      {"IOCTL_MOUNTMGR_CREATE_POINT", 0x006DC000 },
      {"IOCTL_MOUNTMGR_DELETE_POINTS", 0x006DC004 },
      {"IOCTL_MOUNTMGR_DELETE_POINTS_DBONLY", 0x006DC00C },
      {"IOCTL_MOUNTMGR_NEXT_DRIVE_LETTER", 0x006DC010 },
      {"IOCTL_MOUNTMGR_AUTO_DL_ASSIGNMENTS", 0x006DC014 },
      {"IOCTL_MOUNTMGR_VOLUME_MOUNT_POINT_CREATED", 0x006DC018 },
      {"IOCTL_MOUNTMGR_VOLUME_MOUNT_POINT_DELETED", 0x006DC01C },
      {"IOCTL_MOUNTMGR_KEEP_LINKS_WHEN_OFFLINE", 0x006DC024 },
      {"IOCTL_GET_VERSION", 0x80002000 },
      {"IOCTL_CANCEL_IO", 0x80002004 },
      {"IOCTL_WAIT_ON_DEVICE_EVENT", 0x80002008 },
      {"IOCTL_READ_REGISTERS", 0x8000200C },
      {"IOCTL_WRITE_REGISTERS", 0x80002010 },
      {"IOCTL_GET_CHANNEL_ALIGN_RQST", 0x80002014 },
      {"IOCTL_GET_DEVICE_DESCRIPTOR", 0x80002018 },
      {"IOCTL_RESET_PIPE", 0x8000201C },
      {"IOCTL_GET_USB_DESCRIPTOR", 0x80002020 },
      {"IOCTL_GET_PIPE_CONFIGURATION", 0x80002028 },
		{NULL, 0},
	};