@echo off
setlocal
set "IDF_PATH=C:\Users\FREDD\esp\v6.0.2\esp-idf"
set "IDF_PYTHON_ENV_PATH=C:\Users\FREDD\.espressif\python_env\idf6.0_py3.11_env"
set "ESP_IDF_VERSION=6.0.2"
set "ESP_ROM_ELF_DIR=C:\Users\FREDD\.espressif\tools\esp-rom-elfs\20241011"
set "PATH=C:\Users\FREDD\.espressif\tools\riscv32-esp-elf\esp-15.2.0_20251204\riscv32-esp-elf\bin;C:\Users\FREDD\.espressif\tools\cmake\4.0.3\bin;C:\Users\FREDD\.espressif\tools\ninja\1.12.1;C:\Users\FREDD\.espressif\python_env\idf6.0_py3.11_env\Scripts;%PATH%"
cd /d C:\Development\Github\HA-IO-C6\firmware
if exist build if not exist build\project_description.json (
    echo Removing incomplete ESP-IDF build directory...
    rmdir /s /q build
)
if exist sdkconfig (
    "C:\Users\FREDD\.espressif\python_env\idf6.0_py3.11_env\Scripts\python.exe" "C:\Users\FREDD\esp\v6.0.2\esp-idf\tools\idf.py" build
) else (
    "C:\Users\FREDD\.espressif\python_env\idf6.0_py3.11_env\Scripts\python.exe" "C:\Users\FREDD\esp\v6.0.2\esp-idf\tools\idf.py" set-target esp32c6 build
)
endlocal
