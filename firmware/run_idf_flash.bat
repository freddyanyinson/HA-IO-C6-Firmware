@echo off
setlocal
set "IDF_PATH=C:\Users\FREDD\esp\v6.0.2\esp-idf"
set "IDF_PYTHON_ENV_PATH=C:\Users\FREDD\.espressif\python_env\idf6.0_py3.11_env"
set "ESP_IDF_VERSION=6.0.2"
set "ESP_ROM_ELF_DIR=C:\Users\FREDD\.espressif\tools\esp-rom-elfs\20241011"
set "PATH=C:\Users\FREDD\.espressif\tools\riscv32-esp-elf\esp-15.2.0_20251204\riscv32-esp-elf\bin;C:\Users\FREDD\.espressif\tools\cmake\4.0.3\bin;C:\Users\FREDD\.espressif\tools\ninja\1.12.1;C:\Users\FREDD\.espressif\python_env\idf6.0_py3.11_env\Scripts;%PATH%"
if "%~1"=="" (set "IDF_PORT=COM4") else (set "IDF_PORT=%~1")
cd /d C:\Development\Github\HA-IO-C6\firmware
mode %IDF_PORT% >nul 2>nul
if errorlevel 2 goto :ports_error
"C:\Users\FREDD\.espressif\python_env\idf6.0_py3.11_env\Scripts\python.exe" "C:\Users\FREDD\esp\v6.0.2\esp-idf\tools\idf.py" -p %IDF_PORT% flash
goto :done
:ports_error
echo.
echo Connect the board, close any app using the port, then run:
echo   run_idf_ports.bat
echo   run_idf_flash.bat COMx
:done
endlocal
