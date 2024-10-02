@echo off
call "D:\program\microsoft\vs2022\communtity\VC\Auxiliary\Build\vcvars64.bat"
if errorlevel 1 (
    echo Warning: Failed to set up the environment. Continuing...
)

if "%1" == "" (
    cmake --preset=win64-release 
    cmake --build --preset=win64-release    
) else if "%1" == "release" (
    cmake --preset=win64-release 
    cmake --build --preset=win64-release
) else if "%1" == "debug" (
    cmake --preset=win64-debug 
    cmake --build --preset=win64-debug
) else if "%1" == "clean" (
    rd /q/s build
) else if "%1" == "run" (
    cmake --preset=win64-release 
    cmake --build --preset=win64-release
    cd build\ninja-release\dist\bin
    janna.exe
    cd ..\..\..\..\
)


