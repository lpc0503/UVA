@echo off

cls

mkdir UVA%1
type template > UVA%1\UVA%1.cpp
echo.> UVA%1\UVA%1.in
echo.> UVA%1\UVA%1.out

echo UVA%1 successfully created
