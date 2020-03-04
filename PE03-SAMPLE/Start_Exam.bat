@echo off
PATH=%CD%;%CD%\bin;C:\Apps\mingw\bin;C:\Apps\GCC\bin;%PATH%
Start SciTE.exe -position.width=900 -position.height=1050 p2.cpp p1.cpp
Start instructions.pdf
cmd /k
