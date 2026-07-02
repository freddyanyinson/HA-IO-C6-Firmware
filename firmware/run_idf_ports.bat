@echo off
setlocal
echo Available serial ports:
powershell -NoProfile -ExecutionPolicy Bypass -Command "Get-CimInstance Win32_SerialPort | Select-Object DeviceID,Name | Format-Table -AutoSize; Get-PnpDevice -Class Ports -ErrorAction SilentlyContinue | Select-Object FriendlyName,Status | Format-Table -AutoSize"
echo.
echo If no COM port appears, reconnect the XIAO ESP32-C6, try another USB cable/port, or check Device Manager.
endlocal
