
#include "othercmd.hpp"

BUGCHECKCODE_ENTRY stBugCheckCodeList[] =
	{
      {0x1, "APC_INDEX_MISMATCH", 0 },
      {0x2, "DEVICE_QUEUE_NOT_BUSY", 0 },
      {0x3, "INVALID_AFFINITY_SET", 0 },
      {0x4, "INVALID_DATA_ACCESS_TRAP", 0 },
      {0x5, "INVALID_PROCESS_ATTACH_ATTEMPT", 0 },
      {0x6, "INVALID_PROCESS_DETACH_ATTEMPT", 0 },
      {0x7, "INVALID_SOFTWARE_INTERRUPT", 0 },
      {0x8, "IRQL_NOT_DISPATCH_LEVEL", 0 },
      {0x9, "IRQL_NOT_GREATER_OR_EQUAL", 0 },
      {0xA, "IRQL_NOT_LESS_OR_EQUAL", 0 },
      {0xB, "NO_EXCEPTION_HANDLING_SUPPORT", 0 },
      {0xC, "MAXIMUM_WAIT_OBJECTS_EXCEEDED", 0 },
      {0xD, "MUTEX_LEVEL_NUMBER_VIOLATION", 0 },
      {0xE, "NO_USER_MODE_CONTEXT", 0 },
      {0xF, "SPIN_LOCK_ALREADY_OWNED", 0 },
      {0x10, "SPIN_LOCK_NOT_OWNED", 0 },
      {0x11, "THREAD_NOT_MUTEX_OWNER", 0 },
      {0x12, "TRAP_CAUSE_UNKNOWN", 0 },
      {0x13, "EMPTY_THREAD_REAPER_LIST", 0 },
      {0x14, "CREATE_DELETE_LOCK_NOT_LOCKED", 0 },
      {0x15, "LAST_CHANCE_CALLED_FROM_KMODE", 0 },
      {0x16, "CID_HANDLE_CREATION", 0 },
      {0x17, "CID_HANDLE_DELETION", 0 },
      {0x18, "REFERENCE_BY_POINTER", 0 },
      {0x19, "BAD_POOL_HEADER", 0 },
      {0x1A, "MEMORY_MANAGEMENT", 0 },
      {0x1B, "PFN_SHARE_COUNT", 0 },
      {0x1C, "PFN_REFERENCE_COUNT", 0 },
      {0x1D, "NO_SPIN_LOCK_AVAILABLE", 0 },
      {0x1E, "KMODE_EXCEPTION_NOT_HANDLED", 0 },
      {0x1F, "SHARED_RESOURCE_CONV_ERROR", 0 },
      {0x20, "KERNEL_APC_PENDING_DURING_EXIT", 0 },
      {0x21, "QUOTA_UNDERFLOW", 0 },
      {0x22, "FILE_SYSTEM", 0 },
      {0x23, "FAT_FILE_SYSTEM", 0 },
      {0x24, "NTFS_FILE_SYSTEM", 0 },
      {0x25, "NPFS_FILE_SYSTEM", 0 },
      {0x26, "CDFS_FILE_SYSTEM", 0 },
      {0x27, "RDR_FILE_SYSTEM", 0 },
      {0x28, "CORRUPT_ACCESS_TOKEN", 0 },
      {0x29, "SECURITY_SYSTEM", 0 },
      {0x2A, "INCONSISTENT_IRP", 0 },
      {0x2B, "PANIC_STACK_SWITCH", 0 },
      {0x2C, "PORT_DRIVER_INTERNAL", 0 },
      {0x2D, "SCSI_DISK_DRIVER_INTERNAL", 0 },
      {0x2E, "DATA_BUS_ERROR", 0 },
      {0x2F, "INSTRUCTION_BUS_ERROR", 0 },
      {0x30, "SET_OF_INVALID_CONTEXT", 0 },
      {0x31, "PHASE0_INITIALIZATION_FAILED", 0 },
      {0x32, "PHASE1_INITIALIZATION_FAILED", 0 },
      {0x33, "UNEXPECTED_INITIALIZATION_CALL", 0 },
      {0x34, "CACHE_MANAGER", 0 },
      {0x35, "NO_MORE_IRP_STACK_LOCATIONS", 0 },
      {0x36, "DEVICE_REFERENCE_COUNT_NOT_ZERO", 0 },
      {0x37, "FLOPPY_INTERNAL_ERROR", 0 },
      {0x38, "SERIAL_DRIVER_INTERNAL", 0 },
      {0x39, "SYSTEM_EXIT_OWNED_MUTEX", 0 },
      {0x3A, "SYSTEM_UNWIND_PREVIOUS_USER", 0 },
      {0x3B, "SYSTEM_SERVICE_EXCEPTION", 0 },
      {0x3C, "INTERRUPT_UNWIND_ATTEMPTED", 0 },
      {0x3D, "INTERRUPT_EXCEPTION_NOT_HANDLED", 0 },
      {0x3E, "MULTIPROCESSOR_CONFIGURATION_NOT_SUPPORTED", 0 },
      {0x3F, "NO_MORE_SYSTEM_PTES", 0 },
      {0x40, "TARGET_MDL_TOO_SMALL", 0 },
      {0x41, "MUST_SUCCEED_POOL_EMPTY", 0 },
      {0x42, "ATDISK_DRIVER_INTERNAL", 0 },
      {0x43, "NO_SUCH_PARTITION", 0 },
      {0x44, "MULTIPLE_IRP_COMPLETE_REQUESTS", 0 },
      {0x45, "INSUFFICIENT_SYSTEM_MAP_REGS", 0 },
      {0x46, "DEREF_UNKNOWN_LOGON_SESSION", 0 },
      {0x47, "REF_UNKNOWN_LOGON_SESSION", 0 },
      {0x48, "CANCEL_STATE_IN_COMPLETED_IRP", 0 },
      {0x49, "PAGE_FAULT_WITH_INTERRUPTS_OFF", 0 },
      {0x4A, "IRQL_GT_ZERO_AT_SYSTEM_SERVICE", 0 },
      {0x4B, "STREAMS_INTERNAL_ERROR", 0 },
      {0x4C, "FATAL_UNHANDLED_HARD_ERROR", 0 },
      {0x4D, "NO_PAGES_AVAILABLE", 0 },
      {0x4E, "PFN_LIST_CORRUPT", 0 },
      {0x4F, "NDIS_INTERNAL_ERROR", 0 },
      {0x50, "PAGE_FAULT_IN_NONPAGED_AREA", 0 },
      {0x51, "REGISTRY_ERROR", 0 },
      {0x52, "MAILSLOT_FILE_SYSTEM", 0 },
      {0x53, "NO_BOOT_DEVICE", 0 },
      {0x54, "LM_SERVER_INTERNAL_ERROR", 0 },
      {0x55, "DATA_COHERENCY_EXCEPTION", 0 },
      {0x56, "INSTRUCTION_COHERENCY_EXCEPTION", 0 },
      {0x57, "XNS_INTERNAL_ERROR", 0 },
      {0x58, "FTDISK_INTERNAL_ERROR", 0 },
      {0x59, "PINBALL_FILE_SYSTEM", 0 },
      {0x5A, "CRITICAL_SERVICE_FAILED", 0 },
      {0x5B, "SET_ENV_VAR_FAILED", 0 },
      {0x5C, "HAL_INITIALIZATION_FAILED", 0 },
      {0x5D, "UNSUPPORTED_PROCESSOR", 0 },
      {0x5E, "OBJECT_INITIALIZATION_FAILED", 0 },
      {0x5F, "SECURITY_INITIALIZATION_FAILED", 0 },
      {0x60, "PROCESS_INITIALIZATION_FAILED", 0 },
      {0x61, "HAL1_INITIALIZATION_FAILED", 0 },
      {0x62, "OBJECT1_INITIALIZATION_FAILED", 0 },
      {0x63, "SECURITY1_INITIALIZATION_FAILED", 0 },
      {0x64, "SYMBOLIC_INITIALIZATION_FAILED", 0 },
      {0x65, "MEMORY1_INITIALIZATION_FAILED", 0 },
      {0x66, "CACHE_INITIALIZATION_FAILED", 0 },
      {0x67, "CONFIG_INITIALIZATION_FAILED", 0 },
      {0x68, "FILE_INITIALIZATION_FAILED", 0 },
      {0x69, "IO1_INITIALIZATION_FAILED", 0 },
      {0x6A, "LPC_INITIALIZATION_FAILED", 0 },
      {0x6B, "PROCESS1_INITIALIZATION_FAILED", 0 },
      {0x6C, "REFMON_INITIALIZATION_FAILED", 0 },
      {0x6D, "SESSION1_INITIALIZATION_FAILED", 0 },
      {0x6E, "SESSION2_INITIALIZATION_FAILED", 0 },
      {0x6F, "SESSION3_INITIALIZATION_FAILED", 0 },
      {0x70, "SESSION4_INITIALIZATION_FAILED", 0 },
      {0x71, "SESSION5_INITIALIZATION_FAILED", 0 },
      {0x72, "ASSIGN_DRIVE_LETTERS_FAILED", 0 },
      {0x73, "CONFIG_LIST_FAILED", 0 },
      {0x74, "BAD_SYSTEM_CONFIG_INFO", 0 },
      {0x75, "CANNOT_WRITE_CONFIGURATION", 0 },
      {0x76, "PROCESS_HAS_LOCKED_PAGES", 0 },
      {0x77, "KERNEL_STACK_INPAGE_ERROR", 0 },
      {0x78, "PHASE0_EXCEPTION", 0 },
      {0x79, "MISMATCHED_HAL", 0 },
      {0x7A, "KERNEL_DATA_INPAGE_ERROR", 0 },
      {0x7B, "INACCESSIBLE_BOOT_DEVICE", 0 },
      {0x7C, "BUGCODE_NDIS_DRIVER", 0 },
      {0x7D, "INSTALL_MORE_MEMORY", 0 },
      {0x7E, "SYSTEM_THREAD_EXCEPTION_NOT_HANDLED", 0 },
      {0x7F, "UNEXPECTED_KERNEL_MODE_TRAP", 0 },
      {0x80, "NMI_HARDWARE_FAILURE", 0 },
      {0x81, "SPIN_LOCK_INIT_FAILURE", 0 },
      {0x82, "DFS_FILE_SYSTEM", 0 },
      {0x85, "SETUP_FAILURE", 0 },
      {0x8B, "MBR_CHECKSUM_MISMATCH", 0 },
      {0x8E, "KERNEL_MODE_EXCEPTION_NOT_HANDLED", 0 },
      {0x8F, "PP0_INITIALIZATION_FAILED", 0 },
      {0x90, "PP1_INITIALIZATION_FAILED", 0 },
      {0x92, "UP_DRIVER_ON_MP_SYSTEM", 0 },
      {0x93, "INVALID_KERNEL_HANDLE", 0 },
      {0x94, "KERNEL_STACK_LOCKED_AT_EXIT", 0 },
      {0x96, "INVALID_WORK_QUEUE_ITEM", 0 },
      {0x97, "BOUND_IMAGE_UNSUPPORTED", 0 },
      {0x98, "END_OF_NT_EVALUATION_PERIOD", 0 },
      {0x99, "INVALID_REGION_OR_SEGMENT", 0 },
      {0x9A, "SYSTEM_LICENSE_VIOLATION", 0 },
      {0x9B, "UDFS_FILE_SYSTEM", 0 },
      {0x9C, "MACHINE_CHECK_EXCEPTION", 0 },
      {0x9E, "USER_MODE_HEALTH_MONITOR", 0 },
      {0x9F, "DRIVER_POWER_STATE_FAILURE", 0 },
      {0xA0, "INTERNAL_POWER_ERROR", 0 },
      {0xA1, "PCI_BUS_DRIVER_INTERNAL", 0 },
      {0xA2, "MEMORY_IMAGE_CORRUPT", 0 },
      {0xA3, "ACPI_DRIVER_INTERNAL", 0 },
      {0xA4, "CNSS_FILE_SYSTEM_FILTER", 0 },
      {0xA5, "ACPI_BIOS_ERROR", 0 },
      {0xA7, "BAD_EXHANDLE", 0 },
      {0xAB, "SESSION_HAS_VALID_POOL_ON_EXIT", 0 },
      {0xAC, "HAL_MEMORY_ALLOCATION", 0 },
      {0xAD, "VIDEO_DRIVER_DEBUG_REPORT_REQUEST", 0 },
      {0xB4, "VIDEO_DRIVER_INIT_FAILURE", 0 },
      {0xB8, "ATTEMPTED_SWITCH_FROM_DPC", 0 },
      {0xB9, "CHIPSET_DETECTED_ERROR", 0 },
      {0xBA, "SESSION_HAS_VALID_VIEWS_ON_EXIT", 0 },
      {0xBA, "SESSION_HAS_VALID_VIEWS_ON_EXIT", 0 },
      {0xBC, "NETWORK_BOOT_DUPLICATE_ADDRESS", 0 },
      {0xBE, "ATTEMPTED_WRITE_TO_READONLY_MEMORY", 0 },
      {0xBF, "MUTEX_ALREADY_OWNED", 0 },
      {0xC1, "SPECIAL_POOL_DETECTED_MEMORY_CORRUPTION", 0 },
      {0xC2, "BAD_POOL_CALLER", 0 },
      {0xC4, "DRIVER_VERIFIER_DETECTED_VIOLATION", 0 },
      {0xC5, "DRIVER_CORRUPTED_EXPOOL", 0 },
      {0xC6, "DRIVER_CAUGHT_MODIFYING_FREED_POOL", 0 },
      {0xC7, "TIMER_OR_DPC_INVALID", 0 },
      {0xC8, "IRQL_UNEXPECTED_VALUE", 0 },
      {0xC9, "DRIVER_VERIFIER_IOMANAGER_VIOLATION ", 0 },
      {0xCA, "PNP_DETECTED_FATAL_ERROR", 0 },
      {0xCB, "DRIVER_LEFT_LOCKED_PAGES_IN_PROCESS", 0 },
      {0xCC, "PAGE_FAULT_IN_FREED_SPECIAL_POOL", 0 },
      {0xCD, "PAGE_FAULT_BEYOND_END_OF_ALLOCATION", 0 },
      {0xCE, "DRIVER_UNLOADED_WITHOUT_CANCELLING_PENDING_OPERATIONS", 0 },
      {0xCF, "TERMINAL_SERVER_DRIVER_MADE_INCORRECT_MEMORY_REFERENCE", 0 },
      {0xD0, "DRIVER_CORRUPTED_MMPOOL", 0 },
      {0xD1, "DRIVER_IRQL_NOT_LESS_OR_EQUAL", 0 },
      {0xD2, "BUGCODE_ID_DRIVER", 0 },
      {0xD3, "DRIVER_PORTION_MUST_BE_NONPAGED", 0 },
      {0xD4, "SYSTEM_SCAN_AT_RAISED_IRQL_CAUGHT_IMPROPER_DRIVER", 0 },
      {0xD5, "DRIVER_PAGE_FAULT_IN_FREED_SPECIAL_POOL", 0 },
      {0xD6, "DRIVER_PAGE_FAULT_BEYOND_END_OF_ALLOCATION", 0 },
      {0xD7, "DRIVER_UNMAPPING_INVALID_VIEW", 0 },
      {0xD8, "DRIVER_USED_EXCESSIVE_PTES", 0 },
      {0xD9, "LOCKED_PAGES_TRACKER_CORRUPTION", 0 },
      {0xDA, "SYSTEM_PTE_MISUSE", 0 },
      {0xDB, "DRIVER_CORRUPTED_SYSPTES", 0 },
      {0xDC, "DRIVER_INVALID_STACK_ACCESS", 0 },
      {0xDE, "POOL_CORRUPTION_IN_FILE_AREA", 0 },
      {0xDF, "IMPERSONATING_WORKER_THREAD", 0 },
      {0xE0, "ACPI_BIOS_FATAL_ERROR", 0 },
      {0xE1, "WORKER_THREAD_RETURNED_AT_BAD_IRQL", 0 },
      {0xE2, "MANUALLY_INITIATED_CRASH", 0 },
      {0xE3, "RESOURCE_NOT_OWNED", 0 },
      {0xE4, "WORKER_INVALID", 0 },
      {0xE6, "DRIVER_VERIFIER_DMA_VIOLATION", 0 },
      {0xE7, "INVALID_FLOATING_POINT_STATE", 0 },
      {0xE8, "INVALID_CANCEL_OF_FILE_OPEN", 0 },
      {0xE9, "ACTIVE_EX_WORKER_THREAD_TERMINATION", 0 },
      {0xEA, "THREAD_STUCK_IN_DEVICE_DRIVER", 0 },
      {0xEB, "DIRTY_MAPPED_PAGES_CONGESTION", 0 },
      {0xEC, "SESSION_HAS_VALID_SPECIAL_POOL_ON_EXIT", 0 },
      {0xED, "UNMOUNTABLE_BOOT_VOLUME", 0 },
      {0xEF, "CRITICAL_PROCESS_DIED", 0 },
      {0xF1, "SCSI_VERIFIER_DETECTED_VIOLATION", 0 },
      {0xF3, "DISORDERLY_SHUTDOWN", 0 },
      {0xF4, "CRITICAL_OBJECT_TERMINATION", 0 },
      {0xF5, "FLTMGR_FILE_SYSTEM", 0 },
      {0xF6, "PCI_VERIFIER_DETECTED_VIOLATION", 0 },
      {0xF7, "DRIVER_OVERRAN_STACK_BUFFER", 0 },
      {0xF8, "RAMDISK_BOOT_INITIALIZATION_FAILED", 0 },
      {0xF9, "DRIVER_RETURNED_STATUS_REPARSE_FOR_VOLUME_OPEN", 0 },
      {0xFA, "HTTP_DRIVER_CORRUPTED", 0 },
      {0xFC, "ATTEMPTED_EXECUTE_OF_NOEXECUTE_MEMORY", 0 },
      {0xFD, "DIRTY_NOWRITE_PAGES_CONGESTION", 0 },
      {0xFE, "BUGCODE_USB_DRIVER", 0 },
      {0xFF, "RESERVE_QUEUE_OVERFLOW", 0 },
      {0x100, "LOADER_BLOCK_MISMATCH", 0 },
      {0x101, "CLOCK_WATCHDOG_TIMEOUT", 0 },
      {0x104, "AGP_INVALID_ACCESS", 0 },
      {0x105, "AGP_GART_CORRUPTION", 0 },
      {0x106, "AGP_ILLEGALLY_REPROGRAMMED", 0 },
      {0x108, "THIRD_PARTY_FILE_SYSTEM_FAILURE", 0 },
      {0x109, "CRITICAL_STRUCTURE_CORRUPTION", 0 },
      {0x10A, "APP_TAGGING_INITIALIZATION_FAILED", 0 },
      {0x10C, "FSRTL_EXTRA_CREATE_PARAMETER_VIOLATION", 0 },
      {0x10D, "WDF_VIOLATION", 0 },
      {0x10E, "VIDEO_MEMORY_MANAGEMENT_INTERNAL", 0 },
      {0x10F, "RESOURCE_MANAGER_EXCEPTION_NOT_HANDLED", 0 },
      {0x112, "MSRPC_STATE_VIOLATION", 0 },
      {0x113, "VIDEO_DXGKRNL_FATAL_ERROR", 0 },
      {0x114, "VIDEO_SHADOW_DRIVER_FATAL_ERROR", 0 },
      {0x115, "AGP_INTERNAL", 0 },
      {0x116, "VIDEO_TDR_ERROR", 0 },
      {0x117, "VIDEO_TDR_TIMEOUT_DETECTED", 0 },
      {0x119, "VIDEO_SCHEDULER_INTERNAL_ERROR", 0 },
      {0x11A, "EM_INITIALIZATION_FAILURE", 0 },
      {0x1000007E, "SYSTEM_THREAD_EXCEPTION_NOT_HANDLED_M", 0 },
      {0x1000007F, "UNEXPECTED_KERNEL_MODE_TRAP_M", 0 },
      {0x1000008E, "KERNEL_MODE_EXCEPTION_NOT_HANDLED_M", 0 },
      {0x100000EA, "THREAD_STUCK_IN_DEVICE_DRIVER_M", 0 },
      {0xC0000218, "STATUS_CANNOT_LOAD_REGISTRY_FILE", 0 },
      {0xC000021A, "STATUS_SYSTEM_PROCESS_TERMINATED", 0 },
      {0xC0000221, "STATUS_IMAGE_CHECKSUM_MISMATCH", 0 },
      {0xDEADDEAD, "MANUALLY_INITIATED_CRASH1", 0 },
	{0, NULL, NULL},
	};
