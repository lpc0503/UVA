@echo off

pushd UVA%1

cls
echo COMPILING...

g++ -std=c++11 UVA%1.cpp -o UVA%1.exe -DDBG

echo FINISH
if %ERRORLEVEL% EQU 0 (

	UVA%1.exe
)

popd