# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# compile ASM with /usr/bin/arm-none-eabi-gcc
# compile C with /usr/bin/arm-none-eabi-gcc
# compile CXX with /usr/bin/arm-none-eabi-g++
ASM_DEFINES = -DCFG_TUSB_DEBUG=0 -DCFG_TUSB_MCU=OPT_MCU_RP2040 -DCFG_TUSB_OS=OPT_OS_PICO -DLF_FILE_SEPARATOR=\"/\" -DLF_PACKAGE_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization\" -DLF_REACTION_GRAPH_BREADTH=3 -DLF_SINGLE_THREADED=1 -DLF_SOURCE_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src\" -DLF_SOURCE_GEN_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate\" -DLF_TARGET_FILES_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate\" -DLIB_BOOT_STAGE2_HEADERS=1 -DLIB_PICO_ATOMIC=1 -DLIB_PICO_BIT_OPS=1 -DLIB_PICO_BIT_OPS_PICO=1 -DLIB_PICO_CLIB_INTERFACE=1 -DLIB_PICO_CRT0=1 -DLIB_PICO_CXX_OPTIONS=1 -DLIB_PICO_DIVIDER=1 -DLIB_PICO_DIVIDER_HARDWARE=1 -DLIB_PICO_DOUBLE=1 -DLIB_PICO_DOUBLE_PICO=1 -DLIB_PICO_FIX_RP2040_USB_DEVICE_ENUMERATION=1 -DLIB_PICO_FLASH=1 -DLIB_PICO_FLOAT=1 -DLIB_PICO_FLOAT_PICO=1 -DLIB_PICO_INT64_OPS=1 -DLIB_PICO_INT64_OPS_PICO=1 -DLIB_PICO_MALLOC=1 -DLIB_PICO_MEM_OPS=1 -DLIB_PICO_MEM_OPS_PICO=1 -DLIB_PICO_MULTICORE=1 -DLIB_PICO_NEWLIB_INTERFACE=1 -DLIB_PICO_PLATFORM=1 -DLIB_PICO_PLATFORM_COMPILER=1 -DLIB_PICO_PLATFORM_PANIC=1 -DLIB_PICO_PLATFORM_SECTIONS=1 -DLIB_PICO_PRINTF=1 -DLIB_PICO_PRINTF_PICO=1 -DLIB_PICO_RUNTIME=1 -DLIB_PICO_RUNTIME_INIT=1 -DLIB_PICO_STANDARD_BINARY_INFO=1 -DLIB_PICO_STANDARD_LINK=1 -DLIB_PICO_STDIO=1 -DLIB_PICO_STDIO_UART=1 -DLIB_PICO_STDIO_USB=1 -DLIB_PICO_STDLIB=1 -DLIB_PICO_SYNC=1 -DLIB_PICO_SYNC_CRITICAL_SECTION=1 -DLIB_PICO_SYNC_MUTEX=1 -DLIB_PICO_SYNC_SEM=1 -DLIB_PICO_TIME=1 -DLIB_PICO_TIME_ADAPTER=1 -DLIB_PICO_UNIQUE_ID=1 -DLIB_PICO_UTIL=1 -DLOG_LEVEL=2 -DMODAL_REACTORS=TRUE -DNUMBER_OF_WATCHDOGS=0 -DPICO_32BIT=1 -DPICO_BOARD=\"pololu_3pi_2040_robot\" -DPICO_BUILD=1 -DPICO_CMAKE_BUILD_TYPE=\"Release\" -DPICO_COPY_TO_RAM=0 -DPICO_CXX_ENABLE_EXCEPTIONS=0 -DPICO_NO_FLASH=0 -DPICO_NO_HARDWARE=0 -DPICO_ON_DEVICE=1 -DPICO_RP2040=1 -DPICO_RP2040_USB_DEVICE_UFRAME_FIX=1 -DPICO_TARGET_NAME=\"RobotTemplate\" -DPICO_USE_BLOCKED_RAM=0 -DPLATFORM_RP2040 -DPLATFORM_Rp2040

ASM_INCLUDES = -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/. -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/platform -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/modal_models -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/utils -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/federated -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/federated/network -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/platform -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/modal_models -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/threaded -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/utils -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/federated/RTI -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/trace/api/types -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/version/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/logging/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/tag/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/low_level_platform/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_atomic/include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/lib/tinyusb/src -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/platform/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/robot-lib/src -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_stdlib_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_gpio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_base_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/generated/pico_base -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/boards/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/pico_platform/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/hardware_regs/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_base/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_compiler/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_panic/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_sections/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/hardware_structs/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/hardware_claim/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_sync/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_irq/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_uart/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_resets/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_clocks/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pll/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_vreg/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_watchdog/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_ticks/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_bootrom/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/boot_picoboot_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/boot_bootrom_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_boot_lock/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_flash/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_time/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_timer/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_sync/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_util/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_time_adapter/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_xosc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_divider/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_runtime/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_runtime_init/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_bit_ops_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_divider_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_double/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_float/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_malloc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_binary_info/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_printf/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio_uart/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio_usb/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_unique_id/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_flash/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_xip_cache/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_usb_reset_interface_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_multicore/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/boot_picobin_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_int64_ops/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_mem_ops/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/boot_stage2/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_adc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pwm/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_spi/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_i2c/include

ASM_FLAGS = -mcpu=cortex-m0plus -mthumb -g -O3 -DNDEBUG -ffunction-sections -fdata-sections

C_DEFINES = -DCFG_TUSB_DEBUG=0 -DCFG_TUSB_MCU=OPT_MCU_RP2040 -DCFG_TUSB_OS=OPT_OS_PICO -DLF_FILE_SEPARATOR=\"/\" -DLF_PACKAGE_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization\" -DLF_REACTION_GRAPH_BREADTH=3 -DLF_SINGLE_THREADED=1 -DLF_SOURCE_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src\" -DLF_SOURCE_GEN_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate\" -DLF_TARGET_FILES_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate\" -DLIB_BOOT_STAGE2_HEADERS=1 -DLIB_PICO_ATOMIC=1 -DLIB_PICO_BIT_OPS=1 -DLIB_PICO_BIT_OPS_PICO=1 -DLIB_PICO_CLIB_INTERFACE=1 -DLIB_PICO_CRT0=1 -DLIB_PICO_CXX_OPTIONS=1 -DLIB_PICO_DIVIDER=1 -DLIB_PICO_DIVIDER_HARDWARE=1 -DLIB_PICO_DOUBLE=1 -DLIB_PICO_DOUBLE_PICO=1 -DLIB_PICO_FIX_RP2040_USB_DEVICE_ENUMERATION=1 -DLIB_PICO_FLASH=1 -DLIB_PICO_FLOAT=1 -DLIB_PICO_FLOAT_PICO=1 -DLIB_PICO_INT64_OPS=1 -DLIB_PICO_INT64_OPS_PICO=1 -DLIB_PICO_MALLOC=1 -DLIB_PICO_MEM_OPS=1 -DLIB_PICO_MEM_OPS_PICO=1 -DLIB_PICO_MULTICORE=1 -DLIB_PICO_NEWLIB_INTERFACE=1 -DLIB_PICO_PLATFORM=1 -DLIB_PICO_PLATFORM_COMPILER=1 -DLIB_PICO_PLATFORM_PANIC=1 -DLIB_PICO_PLATFORM_SECTIONS=1 -DLIB_PICO_PRINTF=1 -DLIB_PICO_PRINTF_PICO=1 -DLIB_PICO_RUNTIME=1 -DLIB_PICO_RUNTIME_INIT=1 -DLIB_PICO_STANDARD_BINARY_INFO=1 -DLIB_PICO_STANDARD_LINK=1 -DLIB_PICO_STDIO=1 -DLIB_PICO_STDIO_UART=1 -DLIB_PICO_STDIO_USB=1 -DLIB_PICO_STDLIB=1 -DLIB_PICO_SYNC=1 -DLIB_PICO_SYNC_CRITICAL_SECTION=1 -DLIB_PICO_SYNC_MUTEX=1 -DLIB_PICO_SYNC_SEM=1 -DLIB_PICO_TIME=1 -DLIB_PICO_TIME_ADAPTER=1 -DLIB_PICO_UNIQUE_ID=1 -DLIB_PICO_UTIL=1 -DLOG_LEVEL=2 -DMODAL_REACTORS=TRUE -DNUMBER_OF_WATCHDOGS=0 -DPICO_32BIT=1 -DPICO_BOARD=\"pololu_3pi_2040_robot\" -DPICO_BUILD=1 -DPICO_CMAKE_BUILD_TYPE=\"Release\" -DPICO_COPY_TO_RAM=0 -DPICO_CXX_ENABLE_EXCEPTIONS=0 -DPICO_NO_FLASH=0 -DPICO_NO_HARDWARE=0 -DPICO_ON_DEVICE=1 -DPICO_RP2040=1 -DPICO_RP2040_USB_DEVICE_UFRAME_FIX=1 -DPICO_TARGET_NAME=\"RobotTemplate\" -DPICO_USE_BLOCKED_RAM=0 -DPLATFORM_RP2040 -DPLATFORM_Rp2040

C_INCLUDES = -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/. -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/platform -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/modal_models -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/utils -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/federated -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/federated/network -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/platform -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/modal_models -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/threaded -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/utils -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/federated/RTI -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/trace/api/types -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/version/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/logging/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/tag/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/low_level_platform/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_atomic/include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/lib/tinyusb/src -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/platform/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/robot-lib/src -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_stdlib_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_gpio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_base_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/generated/pico_base -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/boards/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/pico_platform/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/hardware_regs/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_base/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_compiler/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_panic/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_sections/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/hardware_structs/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/hardware_claim/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_sync/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_irq/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_uart/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_resets/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_clocks/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pll/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_vreg/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_watchdog/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_ticks/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_bootrom/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/boot_picoboot_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/boot_bootrom_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_boot_lock/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_flash/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_time/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_timer/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_sync/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_util/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_time_adapter/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_xosc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_divider/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_runtime/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_runtime_init/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_bit_ops_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_divider_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_double/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_float/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_malloc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_binary_info/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_printf/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio_uart/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio_usb/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_unique_id/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_flash/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_xip_cache/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_usb_reset_interface_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_multicore/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/boot_picobin_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_int64_ops/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_mem_ops/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/boot_stage2/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_adc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pwm/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_spi/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_i2c/include

C_FLAGS = -mcpu=cortex-m0plus -mthumb -w -g -O3 -DNDEBUG -std=gnu11 -fdiagnostics-color=always -ffunction-sections -fdata-sections

CXX_DEFINES = -DCFG_TUSB_DEBUG=0 -DCFG_TUSB_MCU=OPT_MCU_RP2040 -DCFG_TUSB_OS=OPT_OS_PICO -DLF_FILE_SEPARATOR=\"/\" -DLF_PACKAGE_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization\" -DLF_REACTION_GRAPH_BREADTH=3 -DLF_SINGLE_THREADED=1 -DLF_SOURCE_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src\" -DLF_SOURCE_GEN_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate\" -DLF_TARGET_FILES_DIRECTORY=\"/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate\" -DLIB_BOOT_STAGE2_HEADERS=1 -DLIB_PICO_ATOMIC=1 -DLIB_PICO_BIT_OPS=1 -DLIB_PICO_BIT_OPS_PICO=1 -DLIB_PICO_CLIB_INTERFACE=1 -DLIB_PICO_CRT0=1 -DLIB_PICO_CXX_OPTIONS=1 -DLIB_PICO_DIVIDER=1 -DLIB_PICO_DIVIDER_HARDWARE=1 -DLIB_PICO_DOUBLE=1 -DLIB_PICO_DOUBLE_PICO=1 -DLIB_PICO_FIX_RP2040_USB_DEVICE_ENUMERATION=1 -DLIB_PICO_FLASH=1 -DLIB_PICO_FLOAT=1 -DLIB_PICO_FLOAT_PICO=1 -DLIB_PICO_INT64_OPS=1 -DLIB_PICO_INT64_OPS_PICO=1 -DLIB_PICO_MALLOC=1 -DLIB_PICO_MEM_OPS=1 -DLIB_PICO_MEM_OPS_PICO=1 -DLIB_PICO_MULTICORE=1 -DLIB_PICO_NEWLIB_INTERFACE=1 -DLIB_PICO_PLATFORM=1 -DLIB_PICO_PLATFORM_COMPILER=1 -DLIB_PICO_PLATFORM_PANIC=1 -DLIB_PICO_PLATFORM_SECTIONS=1 -DLIB_PICO_PRINTF=1 -DLIB_PICO_PRINTF_PICO=1 -DLIB_PICO_RUNTIME=1 -DLIB_PICO_RUNTIME_INIT=1 -DLIB_PICO_STANDARD_BINARY_INFO=1 -DLIB_PICO_STANDARD_LINK=1 -DLIB_PICO_STDIO=1 -DLIB_PICO_STDIO_UART=1 -DLIB_PICO_STDIO_USB=1 -DLIB_PICO_STDLIB=1 -DLIB_PICO_SYNC=1 -DLIB_PICO_SYNC_CRITICAL_SECTION=1 -DLIB_PICO_SYNC_MUTEX=1 -DLIB_PICO_SYNC_SEM=1 -DLIB_PICO_TIME=1 -DLIB_PICO_TIME_ADAPTER=1 -DLIB_PICO_UNIQUE_ID=1 -DLIB_PICO_UTIL=1 -DLOG_LEVEL=2 -DMODAL_REACTORS=TRUE -DNUMBER_OF_WATCHDOGS=0 -DPICO_32BIT=1 -DPICO_BOARD=\"pololu_3pi_2040_robot\" -DPICO_BUILD=1 -DPICO_CMAKE_BUILD_TYPE=\"Release\" -DPICO_COPY_TO_RAM=0 -DPICO_CXX_ENABLE_EXCEPTIONS=0 -DPICO_NO_FLASH=0 -DPICO_NO_HARDWARE=0 -DPICO_ON_DEVICE=1 -DPICO_RP2040=1 -DPICO_RP2040_USB_DEVICE_UFRAME_FIX=1 -DPICO_TARGET_NAME=\"RobotTemplate\" -DPICO_USE_BLOCKED_RAM=0 -DPLATFORM_RP2040 -DPLATFORM_Rp2040

CXX_INCLUDES = -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/. -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/platform -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/modal_models -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/include/core/utils -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/federated -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/federated/network -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/platform -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/modal_models -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/threaded -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/../include/core/utils -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/core/federated/RTI -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/trace/api/types -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/version/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/logging/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/tag/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/low_level_platform/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_atomic/include -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/lib/tinyusb/src -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/platform/api -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot -I/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/robot-lib/src -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_stdlib_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_gpio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_base_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/generated/pico_base -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/boards/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/pico_platform/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/hardware_regs/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_base/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_compiler/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_panic/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_platform_sections/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/hardware_structs/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/hardware_claim/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_sync/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_irq/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_uart/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_resets/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_clocks/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pll/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_vreg/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_watchdog/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_ticks/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_bootrom/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/boot_picoboot_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/boot_bootrom_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_boot_lock/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_flash/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_time/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_timer/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_sync/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_util/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_time_adapter/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_xosc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_divider/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_runtime/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_runtime_init/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_bit_ops_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_divider_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_double/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_float/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_malloc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_binary_info/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_printf/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio_uart/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_stdio_usb/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_unique_id/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_flash/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_xip_cache/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/pico_usb_reset_interface_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_multicore/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/common/boot_picobin_headers/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_int64_ops/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_mem_ops/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2040/boot_stage2/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_adc/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pio/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_pwm/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_spi/include -isystem /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/pico-sdk/src/rp2_common/hardware_i2c/include

CXX_FLAGS = -mcpu=cortex-m0plus -mthumb -g -O3 -DNDEBUG -std=gnu++17 -fdiagnostics-color=always -fno-exceptions -fno-unwind-tables -fno-rtti -fno-use-cxa-atexit -ffunction-sections -fdata-sections

